// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14056f2b0
// name: sub_14056F2B0
// win 1.2.3 | module core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
void __fastcall sub_14056F2B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int128 v6; // xmm6
  volatile signed __int64 *v7; // r8
  volatile signed __int64 *v8; // rax
  __int64 v9; // rt0
  char v10; // of
  int v11; // ecx
  __int128 v12; // xmm6
  volatile signed __int64 *v13; // rdx
  volatile signed __int64 *v14; // rax
  __int64 v15; // rt0
  int v16; // ecx
  char v17; // bl
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int64 v26; // rcx
  __int128 v27; // xmm0
  _BYTE v28[152]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v29; // [rsp+C0h] [rbp+40h]
  __int128 v30; // [rsp+D0h] [rbp+50h]
  __int128 v31; // [rsp+E0h] [rbp+60h]
  __int128 v32; // [rsp+F0h] [rbp+70h]
  __int128 v33; // [rsp+100h] [rbp+80h] BYREF
  __int128 v34; // [rsp+110h] [rbp+90h]
  __int128 v35; // [rsp+120h] [rbp+A0h]
  __int128 v36; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v37; // [rsp+140h] [rbp+C0h]
  __int128 v38; // [rsp+150h] [rbp+D0h]
  __int128 v39; // [rsp+160h] [rbp+E0h]
  __int64 v40; // [rsp+178h] [rbp+F8h] BYREF
  volatile signed __int64 *v41; // [rsp+180h] [rbp+100h]
  __int64 v42; // [rsp+188h] [rbp+108h]

  v42 = -2;
  v2 = a2;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2, 0, 1) == 1 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 24);
    sub_141684120(v28, a2 + 32, 152);
    if ( v2 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) )
      sub_140001660(v2, 184, 8);
    if ( v4 != -1 )
    {
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 8) = v5;
      sub_141684120(a1 + 16, v28, 152);
      return;
    }
    v2 = v5;
  }
  v41 = (volatile signed __int64 *)v2;
  v40 = v2;
  v6 = *(_OWORD *)(v2 + 80);
  sub_14067E120(&v36, v2 + 48);
  v38 = v6;
  v7 = v41;
  v8 = *((volatile signed __int64 **)v41 + 12);
  v9 = _InterlockedIncrement64(v8);
  if ( (v9 < 0) ^ v10 | (v9 == 0) )
    goto LABEL_18;
  v11 = *((_DWORD *)v7 + 26);
  v31 = v38;
  v30 = v37;
  v29 = v36;
  *(_QWORD *)&v32 = v8;
  DWORD2(v32) = v11;
  v12 = *((_OWORD *)v7 + 9);
  sub_14067E120(&v33, v7 + 14);
  v35 = v12;
  v13 = v41;
  v14 = *((volatile signed __int64 **)v41 + 20);
  v15 = _InterlockedIncrement64(v14);
  if ( (v15 < 0) ^ v10 | (v15 == 0) )
LABEL_18:
    BUG();
  v16 = *((_DWORD *)v13 + 42);
  v38 = v35;
  v37 = v34;
  v36 = v33;
  *(_QWORD *)&v39 = v14;
  DWORD2(v39) = v16;
  v17 = *((_BYTE *)v13 + 176);
  v18 = *((_QWORD *)v13 + 2);
  v19 = (__int64)(v13 + 3);
  if ( v18 )
  {
    if ( (_DWORD)v18 == 1 )
      sub_140B9DC80((_QWORD *)&v33 + 1, v19, (__int64)&off_141763208);
    else
      sub_14057AF50((char *)&v33 + 8, v19);
  }
  else
  {
    sub_140B9DC80((_QWORD *)&v33 + 1, v19, (__int64)&off_1417631F0);
  }
  *(_QWORD *)&v33 = v18;
  v20 = v29;
  v21 = v30;
  v22 = v31;
  *(_OWORD *)(a1 + 80) = v32;
  *(_OWORD *)(a1 + 64) = v22;
  *(_OWORD *)(a1 + 48) = v21;
  *(_OWORD *)(a1 + 32) = v20;
  v23 = v36;
  v24 = v37;
  v25 = v38;
  *(_OWORD *)(a1 + 144) = v39;
  *(_OWORD *)(a1 + 128) = v25;
  *(_OWORD *)(a1 + 112) = v24;
  *(_OWORD *)(a1 + 96) = v23;
  *(_BYTE *)(a1 + 160) = v17;
  v26 = *((_QWORD *)&v33 + 1);
  v27 = v34;
  *(_QWORD *)a1 = v33;
  *(_QWORD *)(a1 + 8) = v26;
  *(_OWORD *)(a1 + 16) = v27;
  if ( !_InterlockedDecrement64(v41) )
    sub_1405738F0(&v40);
}