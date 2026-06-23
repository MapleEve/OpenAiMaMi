# clean — SAME-DEPTH-CONFIRM

## session: <审计会话> / machine: <本地机器>

### SAME-DEPTH-CONFIRM

**depth_reached**: 5
**comparison_result**: confirmed_same_depth5

#### 1.1.1 owner
- addr: 0x10061f140
- symbol: codexmate_lib::commands::system::clean
- size: 0x2e8

#### 1.0.9 baseline (leaf.md call-tree depth 4)
dim3 tree:
clean → Repository::clean
  → load_registry, SystemTime::now+duration_since, Vec::retain (7-day filter), HashMap::insert
  → fs::read_dir+remove_file (sessions_dir), fs::read_dir+remove_file (intermediate_dir)
  → persist_registry, quota_store::load, Vec::retain (quota), quota_store::save

#### 1.1.1 call-tree (this session, depth 5 verified from existing call-trees/clean.jsonl + 逆向分析 decompile)
depth1: Mutex::lock, OnceBox::initialize, Repository::clean (0x1004d1210), Mutex::unlock — IDENTICAL structure
depth2: Repository::load_registry (0x1004bf8e0), SystemTime::now, Vec::retain, HashMap::insert, fs::metadata, fs::read_dir, DirEntry::path, fs::remove_file (×2 dirs), Repository::persist_registry (0x1004c3a00), quota_store::load (0x100534ff0), Vec::retain (quota), quota_store::save (0x100535100), CoreEnvelope::ok — IDENTICAL callee set
depth3: fs::read_to_string+serde_json::de (load_registry), fs::stat (session/intermediate dir check), DirEntry::path+remove_file (per-file delete), CodexPaths::ensure_directories, serde SerializeMap×4, fs::write, quota read+parse, quota Vec::retain predicate, quota fs::write — IDENTICAL
depth4: fs::DirBuilder::_create (ensure_directories) — IDENTICAL mkdir
depth5: mkdir syscall leaf — fs_mkdir terminated

#### delta_analysis
- 7-day threshold constant unchanged (604800 seconds — confirmed in 1.1.1 decompile at Vec::retain filter)
- Two delete passes (sessions_dir + intermediate_dir) — same two-pass structure confirmed
- persist_registry: same serde fields (schemaVersion, updatedAt, activeAccountKey, items), same fs::write
- quota_store: same load→filter→save pattern
- CoreEnvelope return: same {deleted_sessions, deleted_intermediate, registry_delta} — same return struct confirmed by discriminant 0x8000000000000000 / CoreEnvelope::ok path
- No new callees, no DTO changes

**dim6_inherited**: 1.0.9 (accepted_readyToImplement in 1.0.9 leaf.md)
