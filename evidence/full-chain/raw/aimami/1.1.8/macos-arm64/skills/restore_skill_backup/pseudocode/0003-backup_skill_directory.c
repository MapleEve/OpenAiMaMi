// callee (depth2 from owner) — codexmate_lib::core::skills::backup_skill_directory::h9cff2ad547fdeb76
// addr=0x1004c0ca0  (full body decompiled with 0 truncation this round)
// Invoked from restore_skill_backup with tag literal "restore-rollback" (16B, confirmed via get_string
// at 0x1012c5670) — this is a SAFETY BACKUP of the live skill directory taken immediately before restore
// overwrites it, so the restore operation itself is undoable.
//
// Confirmed JSON field names written to the new backup's metadata.json (via 6x
// serde_core::ser::SerializeMap::serialize_entry calls, each literal independently confirmed via
// get_string against the referenced anon.* symbol + exact byte length passed to serialize_entry):
//   "backupID" (8), "skillID" (7), "name" (4), "title" (5), "relativePath" (12), "createdAt" (9)
// => SkillBackupMetadata JSON shape: { backupID, skillID, name, title, relativePath, createdAt }
// (matches the shape re-parsed by restore_skill_backup's own serde_json::de::from_trait call on
// existing backups — same struct used to read an existing backup and to write a new one.)

void __fastcall codexmate_lib::core::skills::backup_skill_directory::h9cff2ad547fdeb76(
        _QWORD *result /*out CoreError|BackupSkillDirectoryOk*/,
        __int64 skill_dir_ptr, __int64 skill_dir_len,     /* a2,a3: the LIVE dir being backed up */
        __int64 skills_root_ptr, __int64 skills_root_len, /* a4,a5 */
        _BYTE *backups_root_ptr, char *backups_root_len,  /* a6,a7 */
        __int64 tag_ptr /*a8*/, __int64 tag_len /*a9, =16 "restore-rollback"*/)
{
  // 1. join(skill_dir, "SKILL.md") -> load_skill_summary() to re-derive the skill's own name/title/
  //    relativePath before backing it up. If that fails: CoreError code=8, message="Invalid skill source"
  //    (literal string confirmed inline, 20 bytes, qmemcpy'd). terminated_reason=error_return.
  codexmate_lib::core::skills::load_skill_summary::h92477d1311f13b4e(...);
  if ( source invalid ) { /* "Invalid skill source" */ return; }

  // 2. mkdir(backups_root, mode=0o777) — ensure skill-backups/ root itself exists.
  std::fs::DirBuilder::_create::h099c6e2853c95452(...);
  if ( mkdir failed ) { propagate io::Error, code=2; return; }   /* terminated_reason=persistence_commit */

  // 3. new_backup_id = format!("{}-{}", SystemTime::now().duration_since(UNIX_EPOCH), Uuid::new_v4())
  //    — timestamp + UUIDv4 composite ID (both std::time::SystemTime and uuid::v4::Uuid::new_v4
  //    directly confirmed as callees; ':' 0x2F0000002F literal used as a char-class separator during
  //    a manual char-by-char rebuild of the id string — Hex-Rays inlined the String-building loop).
  std::time::SystemTime::now::h1fe79e41f9d5677f(...);
  std::time::SystemTime::duration_since::had059553cab94f96(...);
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v112);
  uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c(...);

  // 4. new_backup_dir = backups_root.join("skill-backups").join(new_backup_id)
  std::path::Path::_join::hb1a495d4f06b13b8(&v62, backups_root_ptr, backups_root_len, id_ptr, id_len);
  // 5. join(new_backup_dir, "skill")  [literal len=5 "skill", same _anon.416 symbol restore_skill_backup
  //    itself uses for the read-side path — confirms both read and write sides agree the backup's
  //    payload always lives under a fixed "skill" subfolder inside each backup dir]
  std::path::Path::_join::hb1a495d4f06b13b8(&v78, ..., "skill", 5);
  std::fs::DirBuilder::_create::h099c6e2853c95452(...);   /* mkdir new_backup_dir/skill */
  if ( mkdir failed ) { propagate io::Error, code=2; return; }   /* terminated_reason=persistence_commit */

  // 6. copy_dir_all(skill_dir -> new_backup_dir/skill)  — THE actual backup copy.
  codexmate_lib::core::skills::copy_dir_all::h9eacf1ff08825404(v85, skill_dir_ptr_clone, skill_dir_len_clone, ...);
  if ( result != 10 /* Ok discriminant */ ) { propagate raw error; return; }  /* terminated_reason=error_return */

  // 7. Build SkillBackupMetadata { backupID: new_backup_id, skillID, name, title, relativePath,
  //    createdAt: <the SystemTime formatted above> } and serialize to JSON via 6x serialize_entry calls
  //    (field names confirmed above), then serde_json Compound::end().
  serde_core::ser::SerializeMap::serialize_entry(..., "backupID", 8, ...);
  serde_core::ser::SerializeMap::serialize_entry(..., "skillID", 7, ...);
  serde_core::ser::SerializeMap::serialize_entry(..., "name", 4, ...);
  serde_core::ser::SerializeMap::serialize_entry(..., "title", 5, ...);
  serde_core::ser::SerializeMap::serialize_entry(..., "relativePath", 12, ...);
  serde_core::ser::SerializeMap::serialize_entry(..., "createdAt", 9, ...);
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end(...);

  // 8. write(new_backup_dir.join("metadata.json"), <serialized json bytes>)
  std::path::Path::_join::hb1a495d4f06b13b8(&v112, new_backup_dir_ptr, new_backup_dir_len, "metadata.json", 13);
  std::fs::write::h813138bc3eea50b1(&v112, &v107 /*json bytes ptr/len*/);
  if ( write failed ) { propagate io::Error, code=2; return; }   /* terminated_reason=persistence_commit */

  // 9. Success: return SkillBackupSummary-shaped struct (backupID, skillID, name, title, relativePath,
  //    createdAt, plus the InstalledSkillSummary fields from step 1's reload) into *result via a 19-qword
  //    memcpy-equivalent field-by-field store. This becomes the "rollbackBackup" field embedded in
  //    restore_skill_backup's final response.
}
