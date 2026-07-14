// core business logic (depth1) — codexmate_lib::core::skills::restore_skill_backup::h2146afcdb0c1e1fe
// addr=0x1004bfbb0 size=2401B basic_blocks=44 cyclomatic_complexity=22
// caller: owner 0x10030ed50 (sole caller, xrefs_to confirms exactly 1 code xref)
// Full decompile obtained with 0 truncation this round (decompile() direct call, not the
// analyze_function() abbreviated preview which reported decompile_truncated:315 lines).
//
// Signature (Rust, reconstructed from ABI + literal joins):
//   fn restore_skill_backup(skills_root: &Path, backups_root: &Path, backup_id: &str)
//     -> Result<RestoreSkillBackupResponse, CoreError>
// (a2,a3 = skills_root ptr/len; a4,a5 = backups_root(actually the args are reordered by rustc —
//  see evidence.md for the exact join order proof); a6,a7 = backup_id ptr/len)
//
// DELTA vs 1.0.9 baseline (confirmed): the Path::parent()+DirBuilder::_create(mode=0o777,recursive=true)
// mkdir-p block below (marked DELTA-MKDIRP) is NOT present in the 1.0.9 macOS/Windows baseline's
// documented terminal-callee set (baseline README.md lists only: read_to_string metadata.json,
// serde_json::from_trait, backup_skill_directory, copy_dir_all, load_skill_summary — no DirBuilder/parent).

char *__fastcall codexmate_lib::core::skills::restore_skill_backup::h2146afcdb0c1e1fe(
        char *__dst, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  // v54 = backups_root.join("skill-backups")            [literal "skill-backups", len=13, confirmed via get_string]
  std::path::Path::_join::hb1a495d4f06b13b8(&v54, a4, a5, "skill-backups", 13);
  // v51 = v54.join(backup_id)  ->  <backups_root>/skill-backups/<backup_id>
  std::path::Path::_join::hb1a495d4f06b13b8(&v51, v55, v56, a6, a7);
  std::sys::fs::metadata::h32fa16d3052ea535(v59, v52, v53);
  if ( v11 /* metadata() Err => backup_id directory does not exist */ )
  {
    // format!("...{}", backup_id) via unk_10122A28C fmt-string, CoreError code=7, return Err
    *((_QWORD *)__dst + 1) = 7; *(_QWORD *)__dst = 2;
    goto LABEL_21; /* terminated_reason=error_return */
  }
  // v59 = v51.join("metadata.json")     [literal "metadata.json", len=13, confirmed: aRemovemetadata+6]
  std::path::Path::_join::hb1a495d4f06b13b8(v59, v9, v10, "metadata.json", 13);
  std::fs::read_to_string::inner::hcce2334f4117b5b3(__src, ...);   /* terminated_reason=persistence_read */
  if ( read failed ) { code=2, field=io::Error; goto LABEL_21; }  /* terminated_reason=error_return */
  serde_json::de::from_trait::hc7bf3e19690705e7(v59, __src);       /* parse SkillBackupMetadata JSON */
  if ( parse ok /* v59[0] != sentinel 0x8000000000000000 */ )
  {
    // v41 = SkillBackupMetadata{ backupID, skillID, name, title, relativePath, createdAt } (qmemcpy 112B)
    // v48 = <backups_root>/skill-backups/<backup_id>/join("skill")   [literal len=5="skill", confirmed]
    std::path::Path::_join::hb1a495d4f06b13b8(&v48, v9, v10, "skill", 5);
    std::sys::fs::metadata::h32fa16d3052ea535(v59, v49, v50); /* does backup's own "skill" subtree exist? */
    if ( missing ) { code=8, format via unk_10122A2B4; goto LABEL_16; }  /* terminated_reason=error_return */
    // v45 = skills_root.join(metadata.skillID)  -> the LIVE install target directory for this skill
    std::path::Path::_join::hb1a495d4f06b13b8(&v45, v70, v72, skillID_ptr, skillID_len);
    v73=v46; __n=v47;                                    /* v73,__n = target dir ptr/len              */

    // ==== DELTA-MKDIRP (new in 1.1.8, absent from 1.0.9 terminal-callee set) ====
    std::path::Path::parent::h4c3ac26770731fbb(v46, v47);     /* parent_dir = Path::parent(target_dir) */
    v59[0]=511 /*0o777*/; v59[2]=1 /*recursive=true*/;
    std::fs::DirBuilder::_create::h099c6e2853c95452(v59);      /* mkdir -p parent(target_dir)           */
    if ( mkdir failed ) { code=2, raw io::Error; goto LABEL_13; }  /* terminated_reason=persistence_commit/error_return */
    // ==== end DELTA-MKDIRP ====

    std::sys::fs::metadata::h32fa16d3052ea535(v59, v73, __n);   /* does the LIVE target dir currently exist? */
    if ( metadata Err /* target absent */ )
      goto LABEL_27;   /* skip rollback-backup entirely — nothing live to protect */
    // target exists: take a SAFETY BACKUP of the about-to-be-overwritten live dir before mutating it
    codexmate_lib::core::skills::backup_skill_directory::h9cff2ad547fdeb76(
      v59, v73, __n, v70, v72, v63, v8, "restore-rollback", 16);  /* tag literal confirmed via get_string */
    if ( backup Err ) { propagate; goto LABEL_13; }               /* terminated_reason=error_return */
    // v33 = new SkillBackupSummary (the "rollback backup" just created) — kept for the response
    std::sys::fs::remove_dir_all::h50b3bc76069a86c9(v73, __n);    /* delete current live target dir */
    if ( remove ok )
    {
LABEL_27:
      codexmate_lib::core::skills::copy_dir_all::h9eacf1ff08825404(v59, v66, v67, v73, __n);
      /* v66,v67 = <backups_root>/skill-backups/<backup_id>/skill  (the requested backup's saved tree)
         v73,__n = target live dir  — this is the actual RESTORE: recursive copy backup -> live install path */
      if ( copy_dir_all result == 10 /* Ok discriminant */ )
      {
        // v42 = target_dir.join("SKILL.md")  [literal len=8="SKILL.md", confirmed via get_string]
        std::path::Path::_join::hb1a495d4f06b13b8(&v42, v73, __n, "SKILL.md", 8);
        codexmate_lib::core::skills::load_skill_summary::h92477d1311f13b4e(v59, v43, v44, v70, v72);
        if ( summary load ok )
        {
          // assemble ~42-qword success response: metadata fields + rollback SkillBackupSummary (v33,
          // embedded at __dst+336) + reloaded InstalledSkillSummary fields -> single CoreEnvelope::ok(..)
          goto LABEL_19;   /* terminated_reason=response_serialize */
        }
        // summary load failed but restore itself already committed to disk: closure
        // restore_skill_backup::{{closure}}::hc178916a43572a07 builds a degraded-but-Ok response
        // (spec_to_string'd error folded into a status field) — restore is NOT rolled back on this path.
      }
      else { /* copy_dir_all failed: propagate raw error, code=2 */ }   /* terminated_reason=error_return */
    }
    else { /* remove_dir_all failed: propagate raw error, code=2 */ }   /* terminated_reason=error_return */
  }
  else { code=3, field=parse error; goto LABEL_19; }   /* terminated_reason=error_return */
LABEL_19: /* dealloc temp buffers */
LABEL_21: /* dealloc temp buffers, return __dst */
  return __dst;
}
