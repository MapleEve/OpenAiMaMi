// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x14046cb30 | name sub_14046CB30
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14046CB30(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  char result; // al
  __int64 v8; // r14
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  int v12; // eax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE v16[24]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  __int128 v18; // [rsp+48h] [rbp-38h]
  __int128 v19; // [rsp+58h] [rbp-28h]
  __int128 v20; // [rsp+68h] [rbp-18h]
  __int128 v21; // [rsp+78h] [rbp-8h]
  __int64 v22; // [rsp+88h] [rbp+8h]
  __int128 v23; // [rsp+90h] [rbp+10h]
  __int128 v24; // [rsp+A0h] [rbp+20h]
  __int128 v25; // [rsp+B0h] [rbp+30h]
  __int128 v26; // [rsp+C0h] [rbp+40h]
  __int64 v27; // [rsp+D0h] [rbp+50h]
  __int128 v28; // [rsp+E0h] [rbp+60h]
  __int64 v29; // [rsp+F0h] [rbp+70h]
  __int128 v30; // [rsp+100h] [rbp+80h]
  __int64 v31; // [rsp+110h] [rbp+90h]
  __int64 v32; // [rsp+118h] [rbp+98h]
  __int64 v33; // [rsp+120h] [rbp+A0h]
  __int64 v34; // [rsp+128h] [rbp+A8h]

  v34 = -2;
  v4 = *(unsigned __int8 *)(a2 + 8);
  v33 = a2;
  switch ( v4 )
  {
    case 0LL:
      *(_QWORD *)(a2 + 472) = *(_QWORD *)a2;
      *(_BYTE *)(a2 + 492) = 0;
      goto LABEL_3;
    case 1LL:
      sub_1419393E0(&off_1419F1948);
    case 2LL:
      sub_141939400(&off_1419F1948);
    case 3LL:
LABEL_3:
      v32 = a2 + 16;
      v5 = a3;
      sub_14046CF10(v16);
      v6 = *(_QWORD *)v16;
      if ( *(_QWORD *)v16 == -2 )
      {
        *a1 = -2;
        result = 3;
        goto LABEL_26;
      }
      v31 = v17;
      v30 = *(_OWORD *)&v16[8];
      v23 = v18;
      v24 = v19;
      v25 = v20;
      v26 = v21;
      v27 = v22;
      v8 = v32;
      sub_140406840(v32);
      if ( v6 == -1 )
      {
        v29 = v31;
        v28 = v30;
        goto LABEL_25;
      }
      a3 = v5;
      a2 = v33;
      *(_QWORD *)(v33 + 16) = v6;
      *(_OWORD *)(a2 + 24) = v30;
      *(_QWORD *)(a2 + 40) = v31;
      v9 = v24;
      v10 = v25;
      v11 = v26;
      *(_OWORD *)(a2 + 48) = v23;
      *(_OWORD *)(a2 + 64) = v9;
      *(_OWORD *)(a2 + 80) = v10;
      *(_OWORD *)(a2 + 96) = v11;
      *(_QWORD *)(a2 + 112) = v27;
      *(_QWORD *)(a2 + 120) = 0;
      *(_DWORD *)(a2 + 128) = 100000000;
      *(_QWORD *)(a2 + 136) = v8;
      *(_BYTE *)(a2 + 200) = 0;
LABEL_7:
      v32 = a2 + 120;
      sub_14046B370(v16, (__int64 *)(a2 + 120), a3);
      if ( *(_QWORD *)v16 == -2 )
      {
        *a1 = -2;
        result = 4;
        goto LABEL_26;
      }
      v29 = *(_QWORD *)&v16[16];
      v28 = *(_OWORD *)v16;
      v12 = *(unsigned __int8 *)(v33 + 200);
      if ( v12 == 5 )
        goto LABEL_23;
      if ( v12 == 4 )
      {
        sub_14040CAE0(v33 + 208);
        goto LABEL_23;
      }
      if ( v12 != 3 )
        goto LABEL_24;
      v13 = *(_QWORD *)(v33 + 208);
      if ( v13 == -1 )
        goto LABEL_23;
      v14 = 5;
      if ( v13 < 0 )
        v14 = v13 ^ 0x8000000000000000uLL;
      if ( v14 >= 4 )
      {
        v15 = 208;
        if ( v14 == 4 )
        {
          v13 = *(_QWORD *)(v33 + 216);
          v15 = 216;
          if ( (unsigned __int64)v13 > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_23;
        }
      }
      else
      {
        v13 = *(_QWORD *)(v33 + 216);
        v15 = 216;
      }
      if ( v13 )
        sub_140001660(*(_QWORD *)(v33 + v15 + 8), v13, 1);
LABEL_23:
      sub_140409B40(v33 + 168);
LABEL_24:
      sub_14040E580(v33 + 16);
LABEL_25:
      a1[2] = v29;
      *(_OWORD *)a1 = v28;
      result = 1;
LABEL_26:
      *(_BYTE *)(v33 + 8) = result;
      return result;
    case 4LL:
      goto LABEL_7;
  }
}
