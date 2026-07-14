// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND pick_free_port node 0x1010e2420 depth=2
__int64 __fastcall core::net::parser::_$LT$impl$u20$core..net..socket_addr..SocketAddr$GT$::parse_ascii::hc7a8cb9beae572b8(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v5; // rax
  _BYTE *v6; // r13
  __int64 v7; // r12
  char v8; // si
  __int16 v9; // ax
  unsigned __int16 v10; // dx
  unsigned __int64 v11; // rax
  char v12; // cl
  unsigned __int64 v13; // rax
  __int16 v14; // cx
  __int64 v15; // rdx
  __int64 v17; // [rsp+8h] [rbp-78h]
  __int64 v18; // [rsp+10h] [rbp-70h]
  __int64 v19; // [rsp+20h] [rbp-60h]
  __int64 v20; // [rsp+28h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-40h]
  _BYTE *v24; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]

  v24 = a2; /*0x1010e243a*/
  v25 = a3; /*0x1010e243e*/
  v5 = core::net::parser::Parser::read_ipv4_addr::h434e111a2f9db859(&v24); /*0x1010e2446*/
  if ( (v5 & 1) != 0 ) /*0x1010e244d*/
  {
    v6 = v24; /*0x1010e2453*/
    v7 = v25; /*0x1010e2457*/
    if ( v25 && (v8 = *v24, ++v24, --v25, v8 == 58) ) /*0x1010e247e*/
    {
      v19 = v5; /*0x1010e2480*/
      v20 = 0; /*0x1010e2484*/
      LODWORD(v22) = 10; /*0x1010e248c*/
      BYTE4(v22) = 1; /*0x1010e2493*/
      v9 = core::net::parser::Parser::read_number::_$u7b$$u7b$closure$u7d$$u7d$::h70ac9ea5217e4673(&v20, &v24); /*0x1010e249f*/
      if ( v9 == 1 || (v24 = v6, v25 = v7, (v9 & 1) != 0) ) /*0x1010e24b4*/
      {
        v11 = ((unsigned __int64)v10 << 48) | ((v19 & 0xFFFFFFFF00uLL) >> 8 << 16); /*0x1010e24d6*/
        v12 = 1; /*0x1010e24de*/
        goto LABEL_9; /*0x1010e24e7*/
      }
    }
    else
    {
      v24 = v6; /*0x1010e24e9*/
      v25 = v7; /*0x1010e24ed*/
    }
  }
  v11 = 0; /*0x1010e24f1*/
  v12 = 0; /*0x1010e24f5*/
  v24 = a2; /*0x1010e24fe*/
  v25 = a3; /*0x1010e2502*/
LABEL_9:
  if ( (v12 & 1) == 0 ) /*0x1010e2509*/
  {
    core::net::parser::Parser::read_socket_addr_v6::hc5ff3b1567f71d3f(&v20, &v24); /*0x1010e2526*/
    if ( (_DWORD)v20 == 1 ) /*0x1010e252f*/
    {
      v17 = v21; /*0x1010e2538*/
      v18 = v22; /*0x1010e2540*/
      if ( !v25 ) /*0x1010e2551*/
      {
        v13 = (unsigned __int64)HIDWORD(v20) << 16; /*0x1010e2553*/
        v22 = v23; /*0x1010e255b*/
        v21 = v18; /*0x1010e2567*/
        v20 = v17; /*0x1010e256b*/
        v14 = 1; /*0x1010e256f*/
        goto LABEL_15; /*0x1010e256f*/
      }
    }
LABEL_16:
    *(_BYTE *)(a1 + 2) = 3; /*0x1010e25a0*/
    *(_WORD *)a1 = 2; /*0x1010e25a4*/
    return a1; /*0x1010e25a4*/
  }
  if ( v25 ) /*0x1010e2510*/
    goto LABEL_16; /*0x1010e2510*/
  v13 = v11 >> 16; /*0x1010e2516*/
  v14 = 0; /*0x1010e251a*/
LABEL_15:
  *(_QWORD *)(a1 + 24) = v22; /*0x1010e2573*/
  v15 = v20; /*0x1010e257b*/
  *(_QWORD *)(a1 + 16) = v21; /*0x1010e2583*/
  *(_QWORD *)(a1 + 8) = v15; /*0x1010e2587*/
  *(_WORD *)a1 = v14; /*0x1010e258b*/
  *(_DWORD *)(a1 + 2) = v13; /*0x1010e258e*/
  *(_WORD *)(a1 + 6) = WORD2(v13); /*0x1010e2595*/
  return a1; /*0x1010e25ac*/
}