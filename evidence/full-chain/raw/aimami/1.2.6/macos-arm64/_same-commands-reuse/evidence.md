# Same-Commands Reuse Declaration (1.2.4→1.2.6 macOS)

## Reuse Condition
All same-commands entries are icf-alias serde fold-cluster (Visitor::expecting implementations).
These are behavioral duplicates due to ICF (Identical Code Folding) - same behavior, no new reverse engineering needed.

## Reused From
- prev-version: 1.2.4
- prev-evidence: raw/aimami/1.2.4/macos-arm64/
- reuse-condition: ICF-alias fold (behavior unchanged, serde Visitor::expecting)

## Entries (17 icf-alias serde folds)
All entries from same-commands.txt are serde::Visitor::expecting implementations for various
Deserialize impls (AuthFile, BootstrapCacheFile, TokenResponse, QuotaStoreFile, ApiConfig,
AutoSwitchConfig, CodexMateSettings, RegistryFile, etc.). These are code-folded by the linker
and behaviorally identical across versions.
