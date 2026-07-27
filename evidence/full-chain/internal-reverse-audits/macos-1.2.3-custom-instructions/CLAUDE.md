# CLAUDE.md - macos 1.2.3 custom-instructions audit

RULE9 migration check found a delta (backend grep for custom.instruction is not 0). Treat as
distilled partial change, not straight migration. Do not upgrade the flagged
`CustomInstructionProtectionState` signal to command-owner/backend-parity status without a
dedicated follow-up census (full symbol/export scan, not just this one ICF-folded stub hit).
