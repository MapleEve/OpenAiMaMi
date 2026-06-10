# AGENTS.md - windows-1.0.9-mystery-unlock

Scope: Windows AiMaMi 1.0.9 mystery-unlock internal implementation package.

Rules:
- Inherit the repository and `<source-location>` rules before writing.
- mystery-unlock is internal evidence consumed by IPC packages.
- Existing gate state is producer-owned; do not rewrite gate or manifest files
  without explicit owner authorization.
- Additive output is limited to allowed audit bundle files.
