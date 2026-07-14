// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_client node 0x100b10960 depth=2
__int64 __fastcall alloc::sync::Arc$LT$T$C$A$GT$::clone_from_ref_in::hc2ffccd5d2e7a64e(__int64 *a1)
{
  __int64 result; // rax
  size_t v3; // r15
  size_t v4; // rdx
  size_t v5; // r14
  char v6; // si
  int v7; // ecx
  __int64 v8; // r15
  char v9; // r9
  int v10; // edx
  char v11; // r10
  int v12; // r11d
  char v13; // di
  char v14; // r8
  __int64 v15; // r13
  __int64 v16; // r14
  const void *v17; // r12
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-80h]
  __int64 v23; // [rsp+28h] [rbp-78h]
  __int64 v24; // [rsp+30h] [rbp-70h]
  __int64 v25; // [rsp+38h] [rbp-68h]
  __int64 v26; // [rsp+40h] [rbp-60h]
  __int64 v27; // [rsp+48h] [rbp-58h]
  __int64 v28; // [rsp+50h] [rbp-50h]
  __int64 v29; // [rsp+58h] [rbp-48h]
  int v30; // [rsp+68h] [rbp-38h]
  int v31; // [rsp+6Ch] [rbp-34h]
  int v32; // [rsp+70h] [rbp-30h]
  char v33; // [rsp+74h] [rbp-2Ch]
  char v34; // [rsp+75h] [rbp-2Bh]
  char v35; // [rsp+76h] [rbp-2Ah]
  char v36; // [rsp+77h] [rbp-29h]

  result = alloc::sync::arcinner_layout_for_value_layout::h74907c05f0a7a03c(8, 152); /*0x100b1097e*/
  v3 = result; /*0x100b10983*/
  v5 = v4; /*0x100b10986*/
  if ( v4 ) /*0x100b1098c*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b10992*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, v3); /*0x100b1099d*/
    if ( result ) /*0x100b109a5*/
      goto LABEL_3; /*0x100b109a5*/
LABEL_11:
    alloc::alloc::handle_alloc_error::h450e44845847d219(v3, v5); /*0x100b10a72*/
  }
  if ( !result ) /*0x100b10a6c*/
    goto LABEL_11; /*0x100b10a6c*/
LABEL_3:
  *(_QWORD *)result = 1; /*0x100b109ab*/
  *(_QWORD *)(result + 8) = 1; /*0x100b109b2*/
  if ( *((_BYTE *)a1 + 126) == 1 ) /*0x100b109e2*/
  {
    v23 = *(__int64 *)((char *)a1 + 135); /*0x100b109ef*/
    v22 = *(__int64 *)((char *)a1 + 127); /*0x100b109f3*/
    v6 = 1; /*0x100b109f7*/
  }
  else
  {
    v6 = 0; /*0x100b109fc*/
  }
  v7 = *((_DWORD *)a1 + 20); /*0x100b109fe*/
  v8 = a1[9]; /*0x100b10a01*/
  v9 = *((_BYTE *)a1 + 120); /*0x100b10a05*/
  v10 = *((_DWORD *)a1 + 24); /*0x100b10a0a*/
  v24 = a1[11]; /*0x100b10a11*/
  v11 = *((_BYTE *)a1 + 121); /*0x100b10a15*/
  v12 = *(_DWORD *)((char *)a1 + 122); /*0x100b10a1a*/
  v13 = *((_BYTE *)a1 + 143); /*0x100b10a1e*/
  v14 = *((_BYTE *)a1 + 144); /*0x100b10a25*/
  v15 = *a1; /*0x100b10a2d*/
  v25 = a1[1]; /*0x100b10a34*/
  v26 = a1[2]; /*0x100b10a3c*/
  v16 = a1[3]; /*0x100b10a40*/
  v27 = v16; /*0x100b10a44*/
  v17 = (const void *)a1[13]; /*0x100b10a48*/
  if ( v17 ) /*0x100b10a4f*/
  {
    v16 = a1[14]; /*0x100b10a51*/
    if ( v16 < 0 ) /*0x100b10a58*/
    {
      v18 = 0; /*0x100b10a5a*/
      goto LABEL_9; /*0x100b10a5a*/
    }
    v29 = v8; /*0x100b10a8c*/
    v32 = v10; /*0x100b10a90*/
    v31 = v7; /*0x100b10a93*/
    v30 = v12; /*0x100b10a96*/
    v36 = v11; /*0x100b10a9a*/
    v35 = v9; /*0x100b10a9e*/
    v34 = *((_BYTE *)a1 + 144); /*0x100b10aa2*/
    v33 = v13; /*0x100b10aa6*/
    v28 = result; /*0x100b10aad*/
    if ( v16 ) /*0x100b10ab1*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100b10ab3*/
      v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1u); /*0x100b10ac0*/
      v18 = 1; /*0x100b10ac5*/
      if ( !v20 ) /*0x100b10acd*/
LABEL_9:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18, v16); /*0x100b10a5c*/
      v19 = v20; /*0x100b10acf*/
    }
    else
    {
      v19 = 1; /*0x100b10ad4*/
    }
    memcpy((void *)v19, v17, v16); /*0x100b10ae3*/
    result = v28; /*0x100b10ae8*/
    v13 = v33; /*0x100b10aef*/
    v14 = v34; /*0x100b10af3*/
    v9 = v35; /*0x100b10af8*/
    v11 = v36; /*0x100b10afd*/
    v12 = v30; /*0x100b10b02*/
  }
  else
  {
    v29 = v8; /*0x100b10a7d*/
    v32 = v10; /*0x100b10a81*/
    v31 = v7; /*0x100b10a84*/
    v19 = 0; /*0x100b10a87*/
  }
  *(_QWORD *)(result + 16) = v15; /*0x100b10b06*/
  *(_QWORD *)(result + 24) = v25; /*0x100b10b0e*/
  *(_QWORD *)(result + 32) = v26; /*0x100b10b16*/
  *(_QWORD *)(result + 40) = v27; /*0x100b10b1e*/
  v21 = a1[5]; /*0x100b10b26*/
  *(_QWORD *)(result + 48) = a1[4]; /*0x100b10b2a*/
  *(_QWORD *)(result + 56) = v21; /*0x100b10b2e*/
  *(_QWORD *)(result + 64) = a1[6]; /*0x100b10b36*/
  *(_QWORD *)(result + 72) = a1[7]; /*0x100b10b3e*/
  *(_QWORD *)(result + 80) = a1[8]; /*0x100b10b46*/
  *(_QWORD *)(result + 88) = v29; /*0x100b10b4e*/
  *(_DWORD *)(result + 96) = v31; /*0x100b10b55*/
  *(_QWORD *)(result + 104) = v24; /*0x100b10b5c*/
  *(_DWORD *)(result + 112) = v32; /*0x100b10b63*/
  *(_QWORD *)(result + 120) = v19; /*0x100b10b66*/
  *(_QWORD *)(result + 128) = v16; /*0x100b10b6a*/
  *(_BYTE *)(result + 136) = v9; /*0x100b10b71*/
  *(_BYTE *)(result + 137) = v11; /*0x100b10b78*/
  *(_DWORD *)(result + 138) = v12; /*0x100b10b7f*/
  *(_BYTE *)(result + 142) = v6; /*0x100b10b86*/
  *(_QWORD *)(result + 143) = v22; /*0x100b10b95*/
  *(_QWORD *)(result + 151) = v23; /*0x100b10b9c*/
  *(_BYTE *)(result + 159) = v13; /*0x100b10ba3*/
  *(_BYTE *)(result + 160) = v14; /*0x100b10baa*/
  return result; /*0x100b10bb1*/
}