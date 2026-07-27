// module: codexmate_lib/core/relay/proxy_server
// addr: 0x14054e3c0
// name: sub_14054E3C0
// win 1.2.3 | module core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_14054E3C0(__int128 *a1, __int64 a2)
{
  volatile signed __int64 *v3; // rax
  signed __int64 v4; // rdx
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int64 v8; // rdi
  int v9; // eax
  char v10; // al
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 result; // rax
  _OWORD v16[5]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h]
  _OWORD v18[6]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v19; // [rsp+E0h] [rbp+60h]
  __int128 v20; // [rsp+E8h] [rbp+68h] BYREF
  __int128 v21; // [rsp+F8h] [rbp+78h]
  __int128 v22; // [rsp+108h] [rbp+88h]
  __int128 v23; // [rsp+118h] [rbp+98h]
  __int128 v24; // [rsp+128h] [rbp+A8h]
  __int128 v25; // [rsp+138h] [rbp+B8h]
  __int64 v26; // [rsp+148h] [rbp+C8h]
  __int128 v27; // [rsp+150h] [rbp+D0h] BYREF
  __int128 v28; // [rsp+160h] [rbp+E0h]
  __int128 v29; // [rsp+170h] [rbp+F0h]
  __int128 v30; // [rsp+180h] [rbp+100h]
  __int128 v31; // [rsp+190h] [rbp+110h]
  __int128 v32; // [rsp+1A0h] [rbp+120h]
  __int64 v33; // [rsp+1B0h] [rbp+130h]
  signed __int64 v34; // [rsp+1B8h] [rbp+138h] BYREF
  unsigned __int64 v35; // [rsp+1C0h] [rbp+140h]
  _QWORD *v36; // [rsp+1C8h] [rbp+148h]
  char v37; // [rsp+1D6h] [rbp+156h] BYREF
  char v38; // [rsp+1D7h] [rbp+157h]
  __int64 v39; // [rsp+1D8h] [rbp+158h]

  v39 = -2;
  v3 = off_141EC8EE0;
  do
    v4 = _InterlockedExchangeAdd64(v3, 1u);
  while ( !v4 );
  v34 = v4;
  *(_QWORD *)&v20 = &v34;
  *((_QWORD *)&v20 + 1) = &v37;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[3];
  v21 = *a1;
  v22 = v5;
  v23 = v6;
  v24 = v7;
  v25 = a1[4];
  v26 = *((_QWORD *)a1 + 10);
  v38 = 1;
  v8 = sub_1412F09C0();
  v9 = *(unsigned __int8 *)(v8 + 72);
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      sub_14050A4F0(&v20);
      v10 = 1;
      goto LABEL_6;
    }
    v38 = 1;
    sub_14148BBF0(v8, sub_140B82FF0);
    *(_BYTE *)(v8 + 72) = 1;
  }
  v33 = v26;
  v32 = v25;
  v31 = v24;
  v30 = v23;
  v29 = v22;
  v28 = v21;
  v27 = v20;
  v11 = *(_QWORD *)v8;
  v35 = *(_QWORD *)v8;
  if ( v35 >= 0x7FFFFFFFFFFFFFFFLL )
    sub_1416C2FC0(&off_141760B98);
  *(_QWORD *)v8 = v11 + 1;
  v12 = *(_QWORD *)(v8 + 8);
  v19 = v33;
  v18[5] = v32;
  v18[4] = v31;
  v18[3] = v30;
  v18[2] = v29;
  v18[1] = v28;
  v18[0] = v27;
  v36 = (_QWORD *)v8;
  if ( v12 == 2 )
  {
    sub_14050A4F0(v18);
    --*v36;
    v10 = 0;
LABEL_6:
    LOBYTE(v27) = v10;
    *(_QWORD *)&v18[0] = &v27;
    *((_QWORD *)&v18[0] + 1) = sub_1412F1C60;
    sub_1416C32C0(&unk_141760212, v18, a2);
  }
  v17 = v33;
  v16[4] = v32;
  v16[3] = v31;
  v16[2] = v30;
  v16[1] = v29;
  v16[0] = v28;
  v13 = **(_QWORD **)&v18[0];
  v14 = v8 + 16;
  if ( (_DWORD)v12 == 1 )
    result = ((__int64 (__fastcall *)(__int64, _OWORD *, __int64, char **))sub_140599CE0)(v14, v16, v13, &off_141786B98);
  else
    result = ((__int64 (__fastcall *)(__int64, _OWORD *, __int64, char **))sub_1407CD1D0)(v14, v16, v13, &off_141786AF8);
  --*v36;
  return result;
}