// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND pick_free_port node 0x1010e2f50 depth=3
void __fastcall core::net::parser::Parser::read_socket_addr_v6::hc5ff3b1567f71d3f(__int64 a1, char **a2)
{
  char *v2; // r14
  char *v3; // r15
  char v4; // dl
  char *v5; // rcx
  char *v6; // r13
  char v7; // al
  unsigned int v8; // r9d
  unsigned int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // r10d
  char v12; // r8
  unsigned int v13; // kr00_4
  bool v14; // cf
  unsigned int v15; // r10d
  char v16; // dl
  __int16 v17; // ax
  __int16 v18; // dx
  unsigned int v19; // r8d
  __int64 v20; // [rsp+0h] [rbp-60h]
  __int64 v21; // [rsp+8h] [rbp-58h]
  char *v22; // [rsp+10h] [rbp-50h]
  _BYTE v23[9]; // [rsp+18h] [rbp-48h] BYREF
  _BYTE v24[11]; // [rsp+21h] [rbp-3Fh]
  char v25; // [rsp+2Ch] [rbp-34h]
  unsigned int v26; // [rsp+34h] [rbp-2Ch]

  v2 = *a2; /*0x1010e2f61*/
  v3 = a2[1]; /*0x1010e2f64*/
  if ( !v3 ) /*0x1010e2f6b*/
    goto LABEL_13; /*0x1010e2f6b*/
  v4 = *v2; /*0x1010e2f79*/
  *a2 = v2 + 1; /*0x1010e2f7d*/
  a2[1] = v3 - 1; /*0x1010e2f80*/
  if ( v4 != 91 ) /*0x1010e2f87*/
    goto LABEL_13; /*0x1010e2f87*/
  core::net::parser::Parser::read_ipv6_addr::h4d790e233ad94678(v23); /*0x1010e2f97*/
  if ( v23[0] != 1 ) /*0x1010e2fa0*/
    goto LABEL_13; /*0x1010e2fa0*/
  v21 = *(_QWORD *)v24; /*0x1010e2fae*/
  v20 = *(_QWORD *)&v23[1]; /*0x1010e2fb2*/
  v5 = a2[1]; /*0x1010e2fb9*/
  if ( !v5 ) /*0x1010e2fc3*/
    goto LABEL_13; /*0x1010e2fc3*/
  v6 = *a2; /*0x1010e2fc5*/
  v7 = **a2; /*0x1010e2fc8*/
  v8 = 0; /*0x1010e2fcd*/
  if ( v7 == 37 ) /*0x1010e2fd2*/
  {
    if ( v5 == (char *)1 ) /*0x1010e2fdc*/
      goto LABEL_13; /*0x1010e2fdc*/
    v9 = 0; /*0x1010e2fde*/
    v10 = 1; /*0x1010e2fe0*/
    while ( 1 ) /*0x1010e2ff6*/
    {
      v11 = (unsigned __int8)v6[v10] - 48; /*0x1010e2ff6*/
      if ( v11 > 9 ) /*0x1010e2ffe*/
        break; /*0x1010e2ffe*/
      v12 = 0; /*0x1010e3000*/
      v13 = v9; /*0x1010e3003*/
      v9 *= 10; /*0x1010e3003*/
      if ( !is_mul_ok(0xAu, v13) ) /*0x1010e3003*/
        goto LABEL_19; /*0x1010e3003*/
      v14 = __CFADD__(v9, v11); /*0x1010e3008*/
      v15 = v9 + v11; /*0x1010e3008*/
      if ( v14 ) /*0x1010e300b*/
        goto LABEL_19; /*0x1010e300b*/
      ++v10; /*0x1010e300d*/
      v9 = v15; /*0x1010e3010*/
      if ( v5 == (char *)v10 ) /*0x1010e3016*/
      {
        v6 = &v6[(_QWORD)v5]; /*0x1010e3018*/
        v5 = nullptr; /*0x1010e301b*/
        v9 = v15; /*0x1010e301d*/
        goto LABEL_18; /*0x1010e3020*/
      }
    }
    if ( v10 == 1 ) /*0x1010e3048*/
    {
      v12 = 0; /*0x1010e304a*/
      goto LABEL_19; /*0x1010e304a*/
    }
    v6 += v10; /*0x1010e304f*/
    v5 -= v10; /*0x1010e3052*/
LABEL_18:
    v12 = 1; /*0x1010e3055*/
LABEL_19:
    if ( !v5 ) /*0x1010e305e*/
      goto LABEL_13; /*0x1010e305e*/
    v8 = 0; /*0x1010e3060*/
    if ( (v12 & 1) != 0 ) /*0x1010e3067*/
      v8 = v9; /*0x1010e3067*/
    v7 = *v6; /*0x1010e306b*/
  }
  if ( v7 != 93 ) /*0x1010e3072*/
    goto LABEL_13; /*0x1010e3072*/
  if ( v5 == (char *)1 ) /*0x1010e307a*/
    goto LABEL_13; /*0x1010e307a*/
  v16 = v6[1]; /*0x1010e3084*/
  *a2 = v6 + 2; /*0x1010e3089*/
  a2[1] = v5 - 2; /*0x1010e308c*/
  if ( v16 != 58 ) /*0x1010e3093*/
    goto LABEL_13; /*0x1010e3093*/
  *(_QWORD *)v23 = 0; /*0x1010e3095*/
  *(_DWORD *)&v24[7] = 10; /*0x1010e309d*/
  v25 = 1; /*0x1010e30a4*/
  v26 = v8; /*0x1010e30af*/
  v22 = v5 - 1; /*0x1010e30b3*/
  v17 = core::net::parser::Parser::read_number::_$u7b$$u7b$closure$u7d$$u7d$::h70ac9ea5217e4673((__int64)v23, a2); /*0x1010e30b7*/
  v19 = v26; /*0x1010e30c0*/
  if ( v17 != 1 ) /*0x1010e30cb*/
  {
    *a2 = v6 + 1; /*0x1010e30d3*/
    a2[1] = v22; /*0x1010e30d6*/
    if ( (v17 & 1) == 0 ) /*0x1010e30dc*/
    {
LABEL_13:
      *(_DWORD *)a1 = 0; /*0x1010e3028*/
      *a2 = v2; /*0x1010e302e*/
      a2[1] = v3; /*0x1010e3031*/
      return; /*0x1010e3043*/
    }
  }
  *(_QWORD *)(a1 + 12) = v21; /*0x1010e30ea*/
  *(_QWORD *)(a1 + 4) = v20; /*0x1010e30ee*/
  *(_DWORD *)(a1 + 20) = 0; /*0x1010e30f2*/
  *(_DWORD *)(a1 + 24) = v19; /*0x1010e30f9*/
  *(_WORD *)(a1 + 28) = v18; /*0x1010e30fd*/
  *(_DWORD *)a1 = 1; /*0x1010e3101*/
}