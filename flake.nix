{
  description = "zmk flake";
  outputs = inputs @ {self, ...}:
    inputs.flake-utils.lib.eachDefaultSystem (
      system: let
        pkgs = import inputs.nixpkgs {inherit system;};
      in {
        devShells.default =
          (pkgs.buildFHSEnv {
            name = "zmk env";
            targetPkgs = pkgs: (with pkgs; [
              python3
              pipx
              nushell
            ]);
            runScript = "nu";
          }).env;
      }
    );
  inputs = {
    nixpkgs.url = "github:NixOs/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
    pyproject-nix = {
      url = "github:nix-community/pyproject.nix";
      inputs.nixpkgs.follows = "nixpkgs";
    };
  };
}
