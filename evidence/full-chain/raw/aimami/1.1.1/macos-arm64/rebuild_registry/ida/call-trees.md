# rebuild_registry — Call Tree
# session=<审计会话>  machine=<本地机器>
# delta_class=integrity_recovered  platform=macos-arm64

## Tree 1: IPC Handler (depth 2)

```
commands::system::rebuild_registry [0x1006182c0] (IPC handler, mutex wrapper)
├── OnceBox::initialize [0x100f7c920]                     [std once-box, compiler noise]
├── Mutex::lock [0x100f2e7a0]                             [std mutex]
├── panic_count::is_zero_slow_path [0x100fb7400]          [compiler noise]
├── core::repository::Repository::rebuild_registry [0x1004c40a0]  *** CORE IMPL ***
│   └── [see Tree 2]
├── CoreError::fmt [0x10058fda0]                          [error path only]
├── drop_in_place<CoreError> [0x100635190]                [cleanup]
├── unwrap_failed [0x100fbc780]                           [panic path]
└── Mutex::unlock [0x100f2e7c0]                           [std mutex]
```

## Tree 2: Core Impl (depth 5+)

```
Repository::rebuild_registry [0x1004c40a0]
│
├── [L1] CodexPaths::ensure_directories [0x1005582b0]     TERMINATED (platform util)
│
├── [L1] Repository::load_registry [0x1004bf8e0]          (loads prev state)
│   └── [L2] ... [terminated, registry file read]
│
├── [L1] SystemTime::now [0x100f34cf0]                    TERMINATED (std)
├── [L1] SystemTime::duration_since [0x100f34cb0]         TERMINATED (std)
│
├── [L1] auth::load_auth_file [0x10053ac80]               (primary auth.json)
│   ├── [L2] fs::read_to_string::inner [0x100f25740]      TERMINATED (std io)
│   └── [L2] serde_json::de::from_trait [0x1002e89b0]     TERMINATED (serde)
│
├── [L1] auth::make_auth_snapshot [0x10053b9f0]           **DELTA: new plan parsing**
│   ├── [L2] auth::decode_jwt_claims [0x10053aef0]        TERMINATED (jwt decode)
│   ├── [L2] auth::nested_dict [0x10053a9b0]              TERMINATED (dict lookup)
│   ├── [L2] auth::string_val [0x10053a7f0]               TERMINATED (field extract)
│   ├── [L2] plan_mapping::parse_chatgpt_plan_label [0x100536010]  **NEW IN 1.1.1**
│   │   └── [L3] ... [TERMINATED: string comparison PlanType enum]
│   ├── [L2] auth::parse_iso_timestamp [0x10053cf60]      TERMINATED
│   ├── [L2] auth::int_val [0x100544c40]                  TERMINATED
│   ├── [L2] fs::metadata [0x100f2b980]                   TERMINATED (std)
│   ├── [L2] fs::Metadata::modified [0x100f26290]         TERMINATED (std)
│   ├── [L2] SystemTime::now [0x100f34cf0]                TERMINATED
│   ├── [L2] SystemTime::duration_since [0x100f34cb0]     TERMINATED
│   ├── [L2] to_lowercase [0x100f63b30]                   TERMINATED (std)
│   ├── [L2] format::format_inner [0x100f63980]           TERMINATED (alloc)
│   └── [L2] hashbrown::RawTable::drop [0x100604470]      TERMINATED (cleanup)
│
├── [L1] account_io::make_snapshot_path [0x1004bd8d0]     **NEW CALL SITE IN 1.1.1**
│   ├── [L2] alloc/dealloc [0x1000014b0/c0/f0]           TERMINATED
│   ├── [L2] format::format_inner [0x100f63980]           TERMINATED
│   └── [L2] Path::_join [0x100f33a00]                   TERMINATED
│
├── [L1] fs::copy [0x100f2aa10]                           **SIDE EFFECT: snapshot write**
│   └── TERMINATED (std fs)
│
├── [L1] String::clone [0x100f656f0]                      TERMINATED (alloc)
├── [L1] Path::Display::fmt [0x100f45e50]                 TERMINATED
├── [L1] format::format_inner [0x100f63980]               TERMINATED
├── [L1] to_lowercase [0x100f63b30]                       TERMINATED (×2: plan+auth_mode)
│
├── [L1] repository::carry_over_registry_state [0x1004d6230]
│   ├── [L2] String::clone [0x100f656f0]                  TERMINATED (×up to 4 fields)
│   └── [L2] dealloc [0x1000014c0]                        TERMINATED
│
├── [L1] RawVec::grow_one [0x100f79ec0]                   TERMINATED (Vec resize)
│
├── [L1] fs::metadata [0x100f2b980]                       TERMINATED
├── [L1] fs::read_dir [0x100f2ba80]                       TERMINATED
├── [L1] FlattenCompat::next [0x1004b6010]                TERMINATED (iterator)
├── [L1] fs::DirEntry::path [0x100f26120]                 TERMINATED
├── [L1] Path::extension [0x100f33fb0]                    TERMINATED
│   [dir scan loop — same L1 pattern per .json file:]
├── [L1] auth::load_auth_file [0x10053ac80]               (repeated per file)
├── [L1] auth::make_auth_snapshot [0x10053b9f0]           (repeated per file)
├── [L1] repository::carry_over_registry_state [0x1004d6230]  (repeated)
├── [L1] RawVec::grow_one [0x100f79ec0]                   (repeated)
├── [L1] Arc::drop_slow [0x100f4b610]                     TERMINATED
├── [L1] drop_in_place<Flatten<ReadDir>> [0x1004ed3e0]    TERMINATED
│
├── [L1] sort::stable::driftsort_main [0x1007440f0]       TERMINATED (n>=21)
├── [L1] sort::shared::insertion_sort_shift_left [0x1004f2ca0] TERMINATED (n<21)
│
├── [L1] Repository::persist_registry [0x1004c3a00]       **SIDE EFFECT: registry.json**
│   ├── [L2] CodexPaths::ensure_directories [0x1005582b0] TERMINATED
│   ├── [L2] fs::metadata [0x100f2b980]                   TERMINATED (backup check)
│   ├── [L2] SystemTime::now [0x100f34cf0]                TERMINATED
│   ├── [L2] fmt::num::isize::fmt [0x100f67450]           TERMINATED
│   ├── [L2] format::format_inner [0x100f63980]           TERMINATED
│   ├── [L2] Path::_join [0x100f33a00]                    TERMINATED
│   ├── [L2] fs::copy [0x100f2aa10]                       TERMINATED (pre-write backup)
│   ├── [L2] String::clone [0x100f656f0]                  TERMINATED
│   ├── [L2] Vec::clone [0x10065f0f0]                     TERMINATED
│   ├── [L2] serde_core::SerializeMap::serialize_entry ×4  TERMINATED (field writes)
│   ├── [L2] serde_json::ser::Compound::serialize_field ×2 TERMINATED
│   ├── [L2] serde_json::ser::Compound::end [0x10050fcb0] TERMINATED
│   ├── [L2] fs::write [0x100201fe0]                      TERMINATED **SIDE EFFECT**
│   └── [L2] drop_in_place<RegistryFile> [0x1004eb620]    TERMINATED
│
└── [L1] CoreEnvelope::ok [0x100555a00]                   TERMINATED (wrap result)
```

## Terminated Reason Legend
- `TERMINATED (std)` — stdlib leaf, no app logic
- `TERMINATED (serde)` — serde/serde_json serialization leaf
- `TERMINATED (compiler noise)` — panic guards, alloc shims
- `TERMINATED (alloc)` — alloc/dealloc memory management
- `**NEW IN 1.1.1**` — function exists in callee set but not reachable from 1.0.9 system commands
- `**SIDE EFFECT**` — persistent state change (file write)
