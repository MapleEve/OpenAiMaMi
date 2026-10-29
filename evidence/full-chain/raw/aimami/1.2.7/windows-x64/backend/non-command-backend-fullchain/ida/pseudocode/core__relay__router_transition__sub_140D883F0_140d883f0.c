// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140d883f0 | name sub_140D883F0
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D883F0(__int64 a1, __int64 *a2, __int64 a3, char a4, _OWORD *a5)
{
  void *v9; // rax
  __m128i v11[22]; // [rsp+28h] [rbp-58h] BYREF
  char v12; // [rsp+194h] [rbp+114h]
  char v13; // [rsp+1A6h] [rbp+126h]
  __m128i v14[22]; // [rsp+1A8h] [rbp+128h] BYREF
  char v15; // [rsp+314h] [rbp+294h]
  char v16; // [rsp+326h] [rbp+2A6h]
  __int128 v17; // [rsp+328h] [rbp+2A8h] BYREF
  __int64 v18; // [rsp+338h] [rbp+2B8h]
  __int128 v19; // [rsp+340h] [rbp+2C0h] BYREF
  __int64 v20; // [rsp+350h] [rbp+2D0h]
  __int128 v21; // [rsp+358h] [rbp+2D8h] BYREF
  __int64 v22; // [rsp+368h] [rbp+2E8h]
  _BYTE *v23; // [rsp+370h] [rbp+2F0h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+378h] [rbp+2F8h]
  _BYTE v25[24]; // [rsp+380h] [rbp+300h] BYREF
  char v26; // [rsp+39Eh] [rbp+31Eh]
  char v27; // [rsp+39Fh] [rbp+31Fh]
  __int64 v28; // [rsp+3A0h] [rbp+320h]

  v28 = -2;
  if ( *(_DWORD *)a3 == 1 )
  {
    if ( *(_BYTE *)(a3 + 56) )
    {
      sub_140D9A5F0((__int64)v11, (__int64)a2);
      v12 = 0;
      v13 = a4;
      v26 = 1;
      sub_140D90850(&v21, a2, v11);
      if ( (_QWORD)v21 == -1 )
      {
        *(_OWORD *)&v25[1] = *a5;
        v25[0] = 1;
        v26 = 0;
        sub_140D82750((__m128i *)a1, a2, v11, (const __m128i *)v25);
      }
      else
      {
        *(_QWORD *)&v25[16] = v22;
        *(_OWORD *)v25 = v21;
        v23 = v25;
        v24 = sub_1400015F0;
        sub_1416ABFD0(&v17, &unk_141A4A8AC, &v23);
        *(_QWORD *)(a1 + 24) = v18;
        *(_OWORD *)(a1 + 8) = v17;
        *(_QWORD *)a1 = 10;
        if ( *(_QWORD *)v25 )
          sub_140001660(*(_QWORD *)&v25[8], *(_QWORD *)v25, 1);
        sub_1407ADB20(v11);
      }
    }
    else
    {
      nullsub_1(a1);
      v9 = (void *)sub_140001650(80, 1);
      if ( !v9 )
        sub_141938D2B(1, 80);
      qmemcpy(v9, "NativeOff was not applied because no verified ChatGPT write window was available", 80);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 80;
      *(_QWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 24) = 80;
    }
  }
  else
  {
    sub_140D9A5F0((__int64)v14, (__int64)a2);
    v15 = 1;
    v16 = *(_BYTE *)(a3 + 56);
    v27 = 1;
    sub_140D90850(&v21, a2, v14);
    if ( (_QWORD)v21 == -1 )
    {
      *(_OWORD *)&v25[1] = *a5;
      v25[0] = 1;
      v27 = 0;
      sub_140D82750((__m128i *)a1, a2, v14, (const __m128i *)v25);
    }
    else
    {
      *(_QWORD *)&v25[16] = v22;
      *(_OWORD *)v25 = v21;
      v23 = v25;
      v24 = sub_1400015F0;
      sub_1416ABFD0(&v19, &unk_141A4A820, &v23);
      *(_QWORD *)(a1 + 24) = v20;
      *(_OWORD *)(a1 + 8) = v19;
      *(_QWORD *)a1 = 10;
      if ( *(_QWORD *)v25 )
        sub_140001660(*(_QWORD *)&v25[8], *(_QWORD *)v25, 1);
      sub_1407ADB20(v14);
    }
  }
  return a1;
}
