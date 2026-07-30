// __ZN13codexmate_lib4core5relay16codex_diagnostic36mark_orphan_thread_adoption_recovery @ 0x1002583d0 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::mark_orphan_thread_adoption_recovery::h9d2b56b357189005(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t a5,
        const void *a6,
        __int64 __n)
{
  void *v11; // rax
  __int64 v12; // r15
  _QWORD *v13; // r13
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  void *v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r14
  _QWORD *v26; // r12
  __int64 v27; // rax
  __int64 result; // rax
  _DWORD v29[24]; // [rsp+0h] [rbp-170h] BYREF
  _DWORD v30[24]; // [rsp+60h] [rbp-110h] BYREF
  _QWORD v31[2]; // [rsp+C0h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-A0h]
  __int64 v33; // [rsp+D8h] [rbp-98h]
  __int64 v34; // [rsp+E0h] [rbp-90h] BYREF
  void *v35; // [rsp+E8h] [rbp-88h]
  __int64 v36; // [rsp+F0h] [rbp-80h]
  size_t v37; // [rsp+F8h] [rbp-78h]
  const char *v38; // [rsp+100h] [rbp-70h]
  __int64 v39; // [rsp+108h] [rbp-68h]
  __int64 v40; // [rsp+110h] [rbp-60h]
  void *v41; // [rsp+118h] [rbp-58h]
  __int64 v42; // [rsp+120h] [rbp-50h]
  __int64 v43; // [rsp+128h] [rbp-48h]
  void *v44; // [rsp+130h] [rbp-40h]
  _QWORD *v45; // [rsp+138h] [rbp-38h]
  char v46[41]; // [rsp+147h] [rbp-29h] BYREF

  v32 = a2; /*0x1002583f0*/
  v33 = a1; /*0x1002583f7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3, a4); /*0x1002583fe*/
  v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a5, 1); /*0x10025840b*/
  if ( !v11 ) /*0x100258413*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a5); /*0x100258756*/
  v12 = (__int64)v11; /*0x100258419*/
  memcpy(v11, a4, a5); /*0x100258425*/
  v35 = (void *)a5; /*0x10025842a*/
  v36 = v12; /*0x100258431*/
  v37 = a5; /*0x100258435*/
  LOBYTE(v34) = 3; /*0x100258439*/
  v13 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100258454*/
                    &anon_7245a3145add9b93f83b0a9aa358a664_353,
                    6u);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v13); /*0x10025845a*/
  v13[3] = v37; /*0x100258463*/
  v13[2] = v36; /*0x10025846b*/
  v14 = v34; /*0x10025846f*/
  v13[1] = v35; /*0x10025847d*/
  *v13 = v14; /*0x100258481*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v30); /*0x10025848c*/
  v15 = (v30[0] >> 13) - 1; /*0x10025849c*/
  v16 = 0; /*0x10025849f*/
  if ( v30[0] >> 13 <= 0 ) /*0x1002584a3*/
  {
    v17 = (1 - (v30[0] >> 13)) / 0x190u + 1; /*0x1002584b7*/
    v15 += 400 * v17; /*0x1002584bf*/
    v16 = -146097 * v17; /*0x1002584c1*/
  }
  v18 = 1000 /*0x100258529*/
      * (v30[1]
       + 86400LL * (((v15 / 100) >> 2) + ((1461 * v15) >> 2) + v16 + ((v30[0] >> 4) & 0x1FF) - v15 / 100 - 719163))
      + v30[2] / 0xF4240uLL;
  v35 = (void *)(v18 >> 63); /*0x100258533*/
  v36 = v18; /*0x10025853a*/
  LOBYTE(v34) = 2; /*0x10025853e*/
  v19 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10025855c*/
                    "completedAtMsfailurethread-provider-adoptionsversion",
                    0xDu);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v19); /*0x10025855f*/
  v19[3] = v37; /*0x100258568*/
  v19[2] = v36; /*0x100258570*/
  v21 = v34; /*0x100258574*/
  v22 = v35; /*0x10025857b*/
  v19[1] = v35; /*0x100258582*/
  *v19 = v21; /*0x100258586*/
  if ( a6 ) /*0x10025858d*/
  {
    if ( __n < 0 ) /*0x10025859a*/
    {
      v23 = 0; /*0x10025859c*/
      goto LABEL_7; /*0x10025859c*/
    }
    if ( __n ) /*0x1002585aa*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, 13, v20, v22); /*0x1002585ac*/
      v23 = 1; /*0x1002585b1*/
      v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1002585bf*/
      if ( !v24 ) /*0x1002585c7*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v23, __n); /*0x10025859f*/
      v25 = v24; /*0x1002585c9*/
    }
    else
    {
      v25 = 1; /*0x1002585ce*/
    }
    memcpy((void *)v25, a6, __n); /*0x1002585dd*/
    v35 = (void *)__n; /*0x1002585e2*/
    v36 = v25; /*0x1002585e9*/
    v37 = __n; /*0x1002585ed*/
    LOBYTE(v34) = 3; /*0x1002585f1*/
    v26 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10025860c*/
                      "failurethread-provider-adoptionsversion",
                      7u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v26); /*0x100258612*/
    v26[3] = v37; /*0x10025861b*/
    v26[2] = v36; /*0x100258624*/
    v27 = v34; /*0x100258629*/
    v26[1] = v35; /*0x100258637*/
    *v26 = v27; /*0x10025863c*/
  }
  result = codexmate_lib::core::relay::codex_diagnostic::write_orphan_thread_adoption_recovery_file::h68ccfd177436587f( /*0x100258658*/
             v29,
             v33,
             v32,
             a3);
  if ( v29[0] != 11 ) /*0x100258664*/
  {
    qmemcpy(v30, v29, sizeof(v30)); /*0x100258680*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100258691*/
    {
      v31[0] = v30; /*0x100258697*/
      v31[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b; /*0x1002586a5*/
      v40 = 2; /*0x1002586ac*/
      v41 = &anon_7245a3145add9b93f83b0a9aa358a664_391; /*0x1002586bb*/
      v42 = 44; /*0x1002586bf*/
      v44 = &unk_1017C38E4; /*0x1002586ce*/
      v45 = v31; /*0x1002586d9*/
      v34 = 0; /*0x1002586dd*/
      v35 = &anon_7245a3145add9b93f83b0a9aa358a664_391; /*0x1002586e8*/
      v36 = 44; /*0x1002586ef*/
      v37 = 0; /*0x1002586f7*/
      v38 = "src/core/relay/codex_diagnostic.rs"; /*0x100258706*/
      v39 = 34; /*0x10025870a*/
      v43 = 0xCE200000001LL; /*0x10025871c*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v46, &v34); /*0x10025872b*/
    }
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v30); /*0x100258737*/
  }
  return result; /*0x10025873c*/
}