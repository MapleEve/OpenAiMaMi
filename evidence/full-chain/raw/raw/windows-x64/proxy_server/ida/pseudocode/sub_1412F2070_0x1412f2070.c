// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1412f2070
// name: sub_1412F2070
// win 1.2.3 | module core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_1412F2070(unsigned __int64 Address, unsigned __int64 a2, _BYTE *a3, int a4)
{
  __int64 *i; // r13
  unsigned __int64 v6; // rbx
  volatile signed __int64 *v7; // rdi
  unsigned int v8; // r12d
  _QWORD *v9; // r11
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rtt
  __int128 *v15; // rax
  __int64 v16; // rcx
  __int128 v17; // xmm0
  bool v18; // zf
  char v19; // al
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // al
  char v25; // al
  __int64 result; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  _OWORD v29[32]; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+228h] [rbp+1A8h]
  unsigned __int64 *v31; // [rsp+230h] [rbp+1B0h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+238h] [rbp+1B8h]
  void *v33; // [rsp+240h] [rbp+1C0h]
  __int64 (__fastcall *v34)(); // [rsp+248h] [rbp+1C8h]
  _OWORD *v35; // [rsp+250h] [rbp+1D0h]
  int v36; // [rsp+25Ch] [rbp+1DCh]
  unsigned __int64 v37; // [rsp+260h] [rbp+1E0h] BYREF
  unsigned __int64 v38; // [rsp+268h] [rbp+1E8h]
  PVOID Addressa; // [rsp+270h] [rbp+1F0h]
  PVOID v40; // [rsp+278h] [rbp+1F8h]
  char v41; // [rsp+286h] [rbp+206h]
  char v42; // [rsp+287h] [rbp+207h]
  __int64 v43; // [rsp+288h] [rbp+208h]

  v43 = -2;
  LODWORD(i) = a4;
  v6 = a2;
  v7 = (volatile signed __int64 *)Address;
  v37 = a2;
  v30 = 0;
  v8 = 0;
  while ( v6 )
  {
    v9 = a3;
    if ( (_BYTE)i == 2 )
    {
      if ( _InterlockedCompareExchange8((volatile signed __int8 *)v7, 1, 0) )
        sub_1416C15B0(v7);
      if ( 2 * *off_141EC90B8 )
      {
        LODWORD(i) = sub_1416C2250(Address, a2);
        LOBYTE(i) = (unsigned __int8)i ^ 1;
        v9 = v7;
        if ( v30 > 0x1F )
        {
LABEL_27:
          v9 = v7;
          goto LABEL_28;
        }
      }
      else
      {
        LODWORD(i) = 0;
        v9 = v7;
        if ( v30 > 0x1F )
          goto LABEL_27;
      }
    }
    a2 = v9[2];
    if ( !a2 )
      goto LABEL_31;
    while ( 1 )
    {
      v10 = *(_QWORD *)(a2 + 32);
      do
      {
        v11 = v10;
        v12 = v37;
        v13 = v10;
        if ( v37 < v10 )
          v13 = v37;
        v14 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 32), v10 - v13, v10);
      }
      while ( v14 != v10 );
      v6 = v37 - v13;
      v37 -= v13;
      if ( v11 > v12 )
        break;
      v15 = (__int128 *)v9[2];
      if ( !v15 )
      {
        v40 = v9;
        v42 = (char)i;
        v41 = 1;
        sub_1416C3040(&off_141958E78);
      }
      v16 = *((_QWORD *)v15 + 2);
      v9[2] = v16;
      if ( v16 )
        *(_QWORD *)(v16 + 24) = 0;
      else
        v9[1] = 0;
      v15[1] = 0;
      v17 = *v15;
      v18 = *(_QWORD *)v15 == 0;
      *(_QWORD *)v15 = 0;
      Address = v30;
      if ( !v18 )
      {
        if ( v30 >= 0x20 )
        {
          v40 = v9;
          v42 = (char)i;
          v41 = 1;
          sub_1416C30E3(v30, 32, &off_141958F00);
        }
        v29[v30] = v17;
        Address = ++v30;
      }
      if ( Address >= 0x20 )
        break;
      a2 = v9[2];
      if ( !a2 )
      {
        if ( v6 )
          goto LABEL_31;
        goto LABEL_34;
      }
    }
LABEL_28:
    Address = v8;
    LOBYTE(Address) = (v6 == 0) | ~(_BYTE)v8;
    if ( v6 == 0 || (v8 & 1) == 0 )
    {
      LOBYTE(v8) = (v6 == 0) & v8;
      Addressa = v9;
      if ( ((unsigned __int8)i & 1) != 0 )
        goto LABEL_36;
LABEL_35:
      if ( 2 * *off_141EC90B8 )
      {
        v40 = v9;
        v42 = 0;
        v41 = 0;
        v24 = sub_1416C2250(Address, a2);
        v9 = Addressa;
        if ( !v24 )
          *((_BYTE *)Addressa + 1) = 1;
      }
      goto LABEL_36;
    }
LABEL_31:
    if ( v6 >> 61 )
    {
      v31 = (unsigned __int64 *)&unk_141958D08;
      v32 = sub_1414AC520;
      v40 = v9;
      v42 = (char)i;
      v41 = 1;
      sub_1416C32C0(&unk_141958DD8, &v31, &off_141958E08);
    }
    if ( (v6 + ((unsigned __int64)_InterlockedExchangeAdd64(v7 + 4, 2 * v6) >> 1)) >> 61 )
    {
      v31 = &v37;
      v32 = sub_1414AC520;
      v33 = &unk_141958D08;
      v34 = sub_1414AC520;
      v40 = v9;
      v42 = (char)i;
      v41 = 1;
      sub_1416C32C0(&unk_141958E20, &v31, &off_141958E60);
    }
    v37 = 0;
LABEL_34:
    LOBYTE(v8) = 1;
    Addressa = v9;
    if ( ((unsigned __int8)i & 1) == 0 )
      goto LABEL_35;
LABEL_36:
    v19 = *(_BYTE *)v9;
    *(_BYTE *)v9 = 0;
    if ( v19 == 2 )
    {
      v40 = Addressa;
      v42 = (char)i;
      v41 = 0;
      WakeByAddressSingle(Addressa);
    }
    v36 = (int)i;
    v20 = 16 * v30;
    v35 = &v29[v30];
    v30 = 0;
    v21 = -v20;
    v38 = 0;
    for ( i = (__int64 *)v29; ; i += 2 )
    {
      a2 = v38;
      if ( v21 == v38 )
        break;
      v22 = *i;
      v23 = i[1];
      v38 -= 16LL;
      (*(void (__fastcall **)(__int64))(v22 + 8))(v23);
    }
    LOBYTE(i) = 2;
    v6 = v37;
  }
  if ( (_BYTE)i != 2 )
  {
    if ( ((unsigned __int8)i & 1) == 0 && 2 * *off_141EC90B8 && !(unsigned __int8)sub_1416C2250(Address, a2) )
      a3[1] = 1;
    v25 = *a3;
    *a3 = 0;
    if ( v25 == 2 )
      WakeByAddressSingle(a3);
  }
  v38 = v30;
  result = (__int64)v29 + 8;
  Addressa = (char *)v29 + 8;
  while ( v38 )
  {
    v27 = *((_QWORD *)Addressa - 1);
    v28 = *(_QWORD *)Addressa;
    Addressa = (char *)Addressa + 16;
    --v38;
    result = (*(__int64 (__fastcall **)(__int64))(v27 + 24))(v28);
  }
  return result;
}