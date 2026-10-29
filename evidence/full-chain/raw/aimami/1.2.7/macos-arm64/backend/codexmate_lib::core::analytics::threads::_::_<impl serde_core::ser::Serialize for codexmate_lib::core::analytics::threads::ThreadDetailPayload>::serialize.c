// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::threads::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..threads..ThreadDetailPayload$GT$::serialize::h45c706b01fa7ef21; addr: 0x1008aba60; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:16Z
// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall codexmate_lib::core::analytics::threads::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..analytics..threads..ThreadDetailPayload$GT$::serialize::h45c706b01fa7ef21(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 result; // rax
  __int16 v6; // [rsp+8h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+10h] [rbp-20h]

  v2 = *a2; /*0x1008aba70*/
  v3 = *(_QWORD *)(*a2 + 16LL); /*0x1008aba73*/
  if ( *(_QWORD *)*a2 == v3 ) /*0x1008aba7a*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f( /*0x1008abb61*/
      *a2,
      *(_QWORD *)(*a2 + 16LL),
      1,
      1,
      1);
    v3 = *(_QWORD *)(v2 + 16); /*0x1008abb69*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 8) + v3) = 123; /*0x1008aba84*/
  *(_QWORD *)(v2 + 16) = v3 + 1; /*0x1008aba8b*/
  v6 = 256; /*0x1008aba8f*/
  v7 = a2; /*0x1008aba95*/
  v4 = "item"; /*0x1008aba9d*/
  result = serde_core::ser::SerializeMap::serialize_entry::h0084a89f14633625(&v6, "item", 4, a1 + 64); /*0x1008abaad*/
  if ( !result ) /*0x1008abab5*/
  {
    if ( (_BYTE)v6 ) /*0x1008abac6*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008abac6*/
    v4 = "generationthread projection initializedSELECT thread_id,complete,incomplete,failed,state,rollout_id FROM files " /*0x1008abade*/
         "WHERE thread_id<>''SELECT f.thread_id,f.turn_id,f.ts,f.kind,\n"
         "     CASE WHEN f.kind='token' AND COALESCE(json_extract(f.data,'$.model'),'')=''\n"
         "       THEN COALESCE((\n"
         "         SELECT json_set(f.data,'$.model',json_extract(attributed.data,'$.model'))\n"
         "         FROM facts attributed WHERE attributed.key=f.key AND attributed.priority=f.priority\n"
         "           AND attributed.kind='token' AND json_type(attributed.data,'$.model')='text'\n"
         "           AND length(json_extract(attributed.data,'$.model'))>0\n"
         "         ORDER BY attributed.source LIMIT 1\n"
         "       ),f.data) ELSE f.data END AS data FROM facts f\n"
         "     WHERE (f.kind IN ('token','coverage') OR\n"
         "       (f.kind='activity' AND f.ts>=?1) OR\n"
         "       (f.kind IN ('turn','tool','change') AND f.ts>=?2))\n"
         "     AND NOT EXISTS (\n"
         "       SELECT 1 FROM facts winner WHERE winner.key=f.key\n"
         "       AND (winner.priority>f.priority OR\n"
         "         (winner.priority=f.priority AND winner.source<f.source))\n"
         "     )";
    result = serde_core::ser::SerializeMap::serialize_entry::h3f2c8484ae866d3b( /*0x1008abaee*/
               &v6,
               "generationthread projection initializedSELECT thread_id,complete,incomplete,failed,state,rollout_id FROM "
               "files WHERE thread_id<>''SELECT f.thread_id,f.turn_id,f.ts,f.kind,\n"
               "     CASE WHEN f.kind='token' AND COALESCE(json_extract(f.data,'$.model'),'')=''\n"
               "       THEN COALESCE((\n"
               "         SELECT json_set(f.data,'$.model',json_extract(attributed.data,'$.model'))\n"
               "         FROM facts attributed WHERE attributed.key=f.key AND attributed.priority=f.priority\n"
               "           AND attributed.kind='token' AND json_type(attributed.data,'$.model')='text'\n"
               "           AND length(json_extract(attributed.data,'$.model'))>0\n"
               "         ORDER BY attributed.source LIMIT 1\n"
               "       ),f.data) ELSE f.data END AS data FROM facts f\n"
               "     WHERE (f.kind IN ('token','coverage') OR\n"
               "       (f.kind='activity' AND f.ts>=?1) OR\n"
               "       (f.kind IN ('turn','tool','change') AND f.ts>=?2))\n"
               "     AND NOT EXISTS (\n"
               "       SELECT 1 FROM facts winner WHERE winner.key=f.key\n"
               "       AND (winner.priority>f.priority OR\n"
               "         (winner.priority=f.priority AND winner.source<f.source))\n"
               "     )",
               10,
               a1 + 320);
    if ( result ) /*0x1008abaf6*/
      return result; /*0x1008abaf6*/
    if ( (_BYTE)v6 ) /*0x1008abafc*/
      return serde_json::ser::invalid_raw_value::hd0c8797395d11416(&v6, v4); /*0x1008abad2*/
    result = serde_core::ser::SerializeMap::serialize_entry::heaa33910381e9de1( /*0x1008abb11*/
               &v6,
               &anon_0868f19ff3e9f3569e732f60bdb020cc_274,
               6,
               a1);
    if ( !result ) /*0x1008abb19*/
    {
      result = 0; /*0x1008abb1b*/
      if ( (v6 & 1) == 0 ) /*0x1008abb21*/
      {
        if ( HIBYTE(v6) ) /*0x1008abb27*/
        {
          alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::hcf6b9c01431e505d(*v7, "}false", 1); /*0x1008abb3c*/
          return 0; /*0x1008abb41*/
        }
      }
    }
  }
  return result; /*0x1008abab7*/
}