// __ZN13codexmate_lib4core5relay23codex_thread_visibility28session_meta_thread_metadata @ 0x1008e0590 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::session_meta_thread_metadata::h2bea9123194f8278(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v9; // r13d
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  signed __int64 v19; // r13
  signed __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  void *v25; // rcx
  __int64 v26; // rdi
  void *v27; // rsi
  __int64 v28; // rax
  void *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // [rsp+10h] [rbp-E0h] BYREF
  __int64 v32; // [rsp+18h] [rbp-D8h]
  __int64 v33; // [rsp+20h] [rbp-D0h]
  __int64 v34; // [rsp+28h] [rbp-C8h]
  __int64 v35; // [rsp+30h] [rbp-C0h]
  __int64 v36; // [rsp+38h] [rbp-B8h]
  __int64 v37; // [rsp+40h] [rbp-B0h]
  __int64 v38; // [rsp+48h] [rbp-A8h]
  __int64 v39; // [rsp+50h] [rbp-A0h]
  __int64 v40; // [rsp+58h] [rbp-98h]
  __int64 v41; // [rsp+60h] [rbp-90h]
  __int64 v42; // [rsp+68h] [rbp-88h]
  char v43; // [rsp+70h] [rbp-80h] BYREF
  _BYTE v44[7]; // [rsp+71h] [rbp-7Fh]
  __int64 v45; // [rsp+78h] [rbp-78h]
  __int64 v46; // [rsp+80h] [rbp-70h]
  __int64 v47; // [rsp+88h] [rbp-68h]
  char v48; // [rsp+90h] [rbp-60h] BYREF
  _BYTE v49[7]; // [rsp+91h] [rbp-5Fh]
  __int64 v50; // [rsp+98h] [rbp-58h]
  __int64 v51; // [rsp+A0h] [rbp-50h]
  __int64 v52; // [rsp+A8h] [rbp-48h]
  __int64 v53; // [rsp+B0h] [rbp-40h]
  __int64 v54; // [rsp+B8h] [rbp-38h]
  void *__dst; // [rsp+C0h] [rbp-30h]

  v54 = a6; /*0x1008e05a4*/
  v9 = a3; /*0x1008e05ae*/
  v31 = a2; /*0x1008e05b7*/
  v32 = a3; /*0x1008e05be*/
  v33 = 0; /*0x1008e05c5*/
  v34 = 0; /*0x1008e05d0*/
  v35 = a2; /*0x1008e05db*/
  v36 = a3; /*0x1008e05e2*/
  serde_json::de::from_trait::hbc9c8c8dee91749d(&v43, &v31); /*0x1008e05f4*/
  if ( v43 == 6 ) /*0x1008e05ff*/
  {
    result = v45; /*0x1008e0601*/
    *a1 = 3; /*0x1008e0605*/
    a1[1] = result; /*0x1008e060c*/
    return result; /*0x1008e0610*/
  }
  *(_DWORD *)&v49[3] = *(_DWORD *)&v44[3]; /*0x1008e061f*/
  *(_DWORD *)v49 = *(_DWORD *)v44; /*0x1008e0622*/
  v51 = v46; /*0x1008e062d*/
  v52 = v47; /*0x1008e0635*/
  v48 = v43; /*0x1008e0639*/
  v50 = v45; /*0x1008e063c*/
  codexmate_lib::core::relay::codex_thread_visibility::session_meta_provider::h1b8084502a1082a2( /*0x1008e065b*/
    (unsigned int)&v31,
    a2,
    v9,
    a4,
    a5,
    v54,
    a7);
  v12 = v31; /*0x1008e0660*/
  v13 = v32; /*0x1008e0667*/
  v14 = v33; /*0x1008e066e*/
  v15 = v34; /*0x1008e0675*/
  if ( v31 == 11 ) /*0x1008e0680*/
  {
    v53 = v33; /*0x1008e0682*/
    v54 = v32; /*0x1008e0686*/
    v16 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x1008e069a*/
            &v48,
            "/payload/modelSELECT DISTINCT rollout_path FROM threads WHERE rollout_path IS NOT NULL AND rollout_path <> '"
            "' AND COALESCE(archived, 0) = 0",
            14);
    v19 = 0x8000000000000000LL; /*0x1008e069f*/
    if ( v16 && *(_BYTE *)v16 == 3 ) /*0x1008e06b5*/
    {
      v20 = *(_QWORD *)(v16 + 24); /*0x1008e06bb*/
      if ( v20 < 0 ) /*0x1008e06c2*/
      {
        v21 = 0; /*0x1008e06c8*/
        goto LABEL_8; /*0x1008e06c8*/
      }
      v27 = *(void **)(v16 + 16); /*0x1008e07cd*/
      if ( v20 ) /*0x1008e07d1*/
      {
        __dst = *(void **)(v16 + 16); /*0x1008e07d3*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v48, v27, v17, v18); /*0x1008e07d7*/
        v21 = 1; /*0x1008e07dc*/
        v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v20, 1); /*0x1008e07ea*/
        if ( !v28 ) /*0x1008e07f2*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v21, v20); /*0x1008e06cb*/
        a5 = v28; /*0x1008e07f8*/
        v27 = __dst; /*0x1008e07fb*/
      }
      else
      {
        a5 = 1; /*0x1008e0831*/
      }
      memcpy((void *)a5, v27, v20); /*0x1008e083d*/
    }
    else
    {
      v20 = 0x8000000000000000LL; /*0x1008e0744*/
    }
    v23 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(&v48, "/payload/model_reasoning_effortmedium", 31); /*0x1008e0757*/
    if ( v23 && *(_BYTE *)v23 == 3 ) /*0x1008e0764*/
    {
      v19 = *(_QWORD *)(v23 + 24); /*0x1008e0766*/
      if ( v19 < 0 ) /*0x1008e076d*/
      {
        v26 = 0; /*0x1008e0773*/
        goto LABEL_15; /*0x1008e0773*/
      }
      v29 = *(void **)(v23 + 16); /*0x1008e0801*/
      if ( v19 ) /*0x1008e0805*/
      {
        __dst = *(void **)(v23 + 16); /*0x1008e0807*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v48, v29, v24, v25); /*0x1008e080b*/
        v30 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v19, 1); /*0x1008e0818*/
        v26 = 1; /*0x1008e081d*/
        if ( !v30 ) /*0x1008e0825*/
LABEL_15:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v19); /*0x1008e0775*/
        v29 = __dst; /*0x1008e082b*/
      }
      else
      {
        v30 = 1; /*0x1008e0847*/
      }
      __dst = (void *)v30; /*0x1008e084c*/
      memcpy((void *)v30, v29, v19); /*0x1008e0857*/
      v25 = __dst; /*0x1008e085c*/
    }
    a1[1] = v54; /*0x1008e0783*/
    a1[2] = v53; /*0x1008e078b*/
    a1[3] = v15; /*0x1008e078f*/
    a1[4] = v20; /*0x1008e0793*/
    a1[5] = a5; /*0x1008e0797*/
    a1[6] = v20; /*0x1008e079b*/
    a1[7] = v19; /*0x1008e079f*/
    a1[8] = v25; /*0x1008e07a3*/
    a1[9] = v19; /*0x1008e07a7*/
    *a1 = 11; /*0x1008e07ab*/
  }
  else
  {
    a1[11] = v42; /*0x1008e06e2*/
    a1[10] = v41; /*0x1008e06ed*/
    a1[9] = v40; /*0x1008e06f8*/
    a1[8] = v39; /*0x1008e0703*/
    a1[7] = v38; /*0x1008e070e*/
    a1[6] = v37; /*0x1008e0719*/
    v22 = v35; /*0x1008e071d*/
    a1[5] = v36; /*0x1008e072b*/
    a1[4] = v22; /*0x1008e072f*/
    a1[1] = v13; /*0x1008e0733*/
    a1[2] = v14; /*0x1008e0737*/
    a1[3] = v15; /*0x1008e073b*/
    *a1 = v12; /*0x1008e073f*/
  }
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v48); /*0x1008e07bb*/
}