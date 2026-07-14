// mac 1.1.8 BEHAVIORAL-BACKEND check_daemon_state node 0x10109fd20 depth=2
// std3sys2fd4unix8FileDesc11read_to_end
__int64 __fastcall std::sys::fd::unix::FileDesc::read_to_end::h0ea2ab9eb27c9c4e(int *a1, __int64 *a2)
{
  __int64 *v2; // r9
  __int64 v3; // r15
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // rdx
  int v10; // r12d
  unsigned __int64 v11; // rdi
  int v12; // r15d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r15
  __int64 *v15; // r14
  __int64 v16; // rdx
  char *v17; // r15
  char *v18; // r15
  unsigned __int64 v19; // r13
  size_t v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // r14
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r13
  __int64 v28; // [rsp+0h] [rbp-80h] BYREF
  char *v29; // [rsp+8h] [rbp-78h]
  __int64 v30; // [rsp+18h] [rbp-68h]
  unsigned __int64 v31; // [rsp+20h] [rbp-60h]
  __int64 v32; // [rsp+28h] [rbp-58h]
  int *v33; // [rsp+30h] [rbp-50h]
  unsigned __int64 v34; // [rsp+38h] [rbp-48h]
  __int64 *v35; // [rsp+40h] [rbp-40h]
  __int64 v36; // [rsp+48h] [rbp-38h]
  int v37; // [rsp+54h] [rbp-2Ch]

  v2 = a2; /*0x10109fd31*/
  v3 = a2[2]; /*0x10109fd37*/
  v4 = *a2 - v3; /*0x10109fd3e*/
  v30 = *a2; /*0x10109fd41*/
  v5 = v30; /*0x10109fd45*/
  v6 = v3; /*0x10109fd48*/
  if ( v4 < 0x20 ) /*0x10109fd4f*/
  {
    v7 = v2; /*0x10109fd54*/
    if ( (std::io::default_read_to_end::small_probe_read::h4c1b3627c7fa0a2c(a1, v2) & 1) != 0 ) /*0x10109fd64*/
      return 1; /*0x10109fd6b*/
    if ( !v8 ) /*0x10109fd73*/
      return 0; /*0x10109ff5e*/
    v2 = v7; /*0x10109fd79*/
    v5 = *v7; /*0x10109fd7c*/
    v6 = v7[2]; /*0x10109fd7f*/
  }
  v36 = v3; /*0x10109fd86*/
  v33 = a1; /*0x10109fd8a*/
  v10 = *a1; /*0x10109fd8e*/
  v11 = 0x2000; /*0x10109fd91*/
  v12 = 0; /*0x10109fd96*/
  v13 = 0; /*0x10109fd99*/
  v35 = v2; /*0x10109fd9c*/
  while ( 1 ) /*0x10109fda4*/
  {
    v37 = v12; /*0x10109fda4*/
    if ( v5 == v30 && v6 == v5 ) /*0x10109fdad*/
    {
      v14 = v13; /*0x10109fdaf*/
      v15 = v2; /*0x10109fdbc*/
      if ( (std::io::default_read_to_end::small_probe_read::h4c1b3627c7fa0a2c(v33, v2) & 1) != 0 ) /*0x10109fdc9*/
        return 1; /*0x10109fdc9*/
      v6 = v15[2]; /*0x10109fdce*/
      if ( !v16 ) /*0x10109fdd2*/
        return 0; /*0x10109ff66*/
      v2 = v15; /*0x10109fdd8*/
      v5 = *v15; /*0x10109fddb*/
      v13 = v14; /*0x10109fde1*/
    }
    v31 = v13; /*0x10109fde4*/
    v17 = (char *)v2[1]; /*0x10109fde8*/
    v34 = v11; /*0x10109fdef*/
    if ( v6 == v5 ) /*0x10109fdf3*/
      break; /*0x10109fdf3*/
LABEL_13:
    v18 = &v17[v6]; /*0x10109fdf9*/
    v32 = v5; /*0x10109fdfc*/
    v19 = v5 - v6; /*0x10109fe03*/
    if ( v11 < v5 - v6 ) /*0x10109fe09*/
      v19 = v11; /*0x10109fe09*/
    v20 = 0x7FFFFFFF; /*0x10109fe14*/
    if ( v19 < 0x7FFFFFFF ) /*0x10109fe1a*/
      v20 = v19; /*0x10109fe1a*/
    while ( 1 ) /*0x10109fe29*/
    {
      v21 = read(v10, v18, v20); /*0x10109fe29*/
      if ( v21 != -1 ) /*0x10109fe32*/
        break; /*0x10109fe32*/
      if ( *__error() != 4 ) /*0x10109fe40*/
      {
        v35[2] = v6; /*0x10109ff3c*/
        return 1; /*0x10109fe42*/
      }
    }
    v22 = v31; /*0x10109fe50*/
    if ( v21 > v31 ) /*0x10109fe57*/
      v22 = v21; /*0x10109fe57*/
    v6 += v21; /*0x10109fe5b*/
    v2 = v35; /*0x10109fe5e*/
    v35[2] = v6; /*0x10109fe62*/
    if ( !v21 ) /*0x10109fe6d*/
      return 0; /*0x10109fe6d*/
    v23 = v22 - v21; /*0x10109fe76*/
    v12 = v37 + 1; /*0x10109fe79*/
    if ( v21 >= v19 ) /*0x10109fe84*/
      v12 = 0; /*0x10109fe84*/
    v24 = v34; /*0x10109fe90*/
    if ( v12 >= 2 ) /*0x10109fe9a*/
      v24 = -1; /*0x10109fe9a*/
    if ( v22 == v19 ) /*0x10109fea1*/
      v24 = v34; /*0x10109fea1*/
    v13 = v22 - v21; /*0x10109fea5*/
    v11 = v24; /*0x10109fea8*/
    v5 = v32; /*0x10109feae*/
    if ( v21 == v19 ) /*0x10109feb2*/
    {
      v13 = v23; /*0x10109feb8*/
      v11 = v24; /*0x10109febb*/
      if ( v19 >= v24 ) /*0x10109fec1*/
      {
        v11 = 2 * v24; /*0x10109fec7*/
        v13 = v23; /*0x10109fecb*/
        if ( v24 < 0 ) /*0x10109fed1*/
        {
          v11 = -1; /*0x10109fed7*/
          v13 = v23; /*0x10109fede*/
        }
      }
    }
  }
  v25 = v2; /*0x10109fee6*/
  v26 = 2 * v5; /*0x10109feed*/
  if ( v5 + 32 > (unsigned __int64)(2 * v5) ) /*0x10109fef4*/
    v26 = v5 + 32; /*0x10109fef4*/
  v27 = v26; /*0x10109ff0b*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::finish_grow::hf89b1e9445b8948e(&v28, v5, v17, v26, 1u, 1); /*0x10109ff0e*/
  if ( (_DWORD)v28 != 1 ) /*0x10109ff17*/
  {
    v17 = v29; /*0x10109ff19*/
    v25[1] = v29; /*0x10109ff1d*/
    *v25 = v27; /*0x10109ff21*/
    v5 = v27; /*0x10109ff24*/
    v11 = v34; /*0x10109ff27*/
    goto LABEL_13; /*0x10109ff2b*/
  }
  return 1; /*0x10109ff4b*/
}