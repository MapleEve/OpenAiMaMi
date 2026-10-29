// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140289c00 | name sub_140289C00
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140289C00(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  char v5; // bl
  unsigned __int64 v6; // rax
  char v7; // r15
  char v8; // r12
  int v9; // r13d
  __int128 v10; // xmm6
  __int128 v11; // xmm7
  __int64 result; // rax
  char v13; // cl
  __int128 v14; // [rsp+20h] [rbp-60h]
  __int128 v15; // [rsp+38h] [rbp-48h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h]
  __int128 v17; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int128 v19; // [rsp+68h] [rbp-18h] BYREF
  __int64 v20; // [rsp+78h] [rbp-8h]
  __int128 v21; // [rsp+80h] [rbp+0h] BYREF
  __int64 v22; // [rsp+90h] [rbp+10h]
  __int128 v23; // [rsp+98h] [rbp+18h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+28h]
  __int128 v25; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+40h]
  __int128 v27; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+58h]
  unsigned __int64 v29; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v30; // [rsp+E8h] [rbp+68h]
  __int64 v31; // [rsp+F8h] [rbp+78h]
  unsigned __int64 v32; // [rsp+100h] [rbp+80h]
  __int64 v33; // [rsp+108h] [rbp+88h]

  v33 = -2;
  sub_1416AC440(&v27, a2);
  sub_1416AC440(&v25, a2 + 24);
  sub_1416AC440(&v23, a2 + 48);
  sub_1416AC440(&v21, a2 + 72);
  v5 = *(_BYTE *)(a2 + 252);
  v6 = 2;
  if ( *(__int64 *)(a2 + 192) < 0 )
    v6 = *(_QWORD *)(a2 + 192) ^ 0x8000000000000000uLL;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v32 = 0x8000000000000001uLL;
    }
    else
    {
      sub_1416AC440(&v29, a2 + 192);
      v32 = v29;
      v2 = *((_QWORD *)&v30 + 1);
      v31 = v30;
    }
  }
  else
  {
    v32 = 0x8000000000000000uLL;
  }
  sub_1416AC440(&v19, a2 + 96);
  v7 = *(_BYTE *)(a2 + 254);
  v8 = *(_BYTE *)(a2 + 255);
  sub_1403F7A40(&v15, a2 + 120);
  sub_1416AC440(&v17, a2 + 144);
  v9 = *(_DWORD *)(a2 + 248);
  v10 = *(_OWORD *)(a2 + 216);
  v11 = *(_OWORD *)(a2 + 232);
  if ( *(_QWORD *)(a2 + 168) == -1 )
  {
    result = -1;
  }
  else
  {
    sub_1416AC440(&v29, a2 + 168);
    result = v29;
    v14 = v30;
  }
  v13 = *(_BYTE *)(a2 + 253);
  *(_QWORD *)(a1 + 16) = v28;
  *(_OWORD *)a1 = v27;
  *(_QWORD *)(a1 + 40) = v26;
  *(_OWORD *)(a1 + 24) = v25;
  *(_OWORD *)(a1 + 48) = v23;
  *(_QWORD *)(a1 + 64) = v24;
  *(_OWORD *)(a1 + 72) = v21;
  *(_QWORD *)(a1 + 88) = v22;
  *(_BYTE *)(a1 + 252) = v5;
  *(_QWORD *)(a1 + 192) = v32;
  *(_QWORD *)(a1 + 200) = v31;
  *(_QWORD *)(a1 + 208) = v2;
  *(_QWORD *)(a1 + 112) = v20;
  *(_OWORD *)(a1 + 96) = v19;
  *(_BYTE *)(a1 + 254) = v7;
  *(_BYTE *)(a1 + 255) = v8;
  *(_QWORD *)(a1 + 136) = v16;
  *(_OWORD *)(a1 + 120) = v15;
  *(_OWORD *)(a1 + 144) = v17;
  *(_QWORD *)(a1 + 160) = v18;
  *(_DWORD *)(a1 + 248) = v9;
  *(_OWORD *)(a1 + 216) = v10;
  *(_OWORD *)(a1 + 232) = v11;
  *(_QWORD *)(a1 + 168) = result;
  *(_OWORD *)(a1 + 176) = v14;
  *(_BYTE *)(a1 + 253) = v13;
  return result;
}
