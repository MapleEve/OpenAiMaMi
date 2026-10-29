// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x140b66560 | name sub_140B66560
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
bool __fastcall sub_140B66560(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bl
  __int64 v3; // rdx
  char v4; // cl
  volatile signed __int64 *v5; // rsi
  char v6; // al
  char v7; // di
  char v8; // di
  __int64 v9; // rax
  volatile signed __int64 *v10; // rcx
  __int64 v11; // rax
  _QWORD v13[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]
  volatile signed __int64 **v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+48h] [rbp-8h]
  __int64 v17; // [rsp+50h] [rbp+0h]

  v17 = -2;
  v1 = *(unsigned __int8 *)(a1 + 65);
  v16 = a1;
  switch ( v1 )
  {
    case 0LL:
      *(_BYTE *)(a1 + 64) = 1;
      *(_OWORD *)(a1 + 40) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 32);
      v14 = a1 + 40;
      switch ( *(_BYTE *)(a1 + 56) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_26;
        case 2:
          goto LABEL_25;
        case 3:
          goto LABEL_5;
      }
    case 1LL:
      sub_1419393E0(&off_141A2C8A0);
    case 2LL:
      sub_141939400(&off_141A2C8A0);
    case 3LL:
      v14 = a1 + 40;
      switch ( *(_BYTE *)(a1 + 56) )
      {
        case 0:
LABEL_4:
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 40);
          break;
        case 1:
LABEL_26:
          sub_1419393E0(&off_141A2A2C0);
        case 2:
LABEL_25:
          sub_141939400(&off_141A2A2C0);
        case 3:
          break;
      }
LABEL_5:
      v15 = (volatile signed __int64 **)(a1 + 48);
      v2 = sub_14092FD20();
      if ( v2 == 2 )
      {
        v3 = v16;
        *(_BYTE *)(v16 + 56) = 3;
        v4 = 3;
      }
      else
      {
        v5 = *v15;
        if ( *v15 )
        {
          v6 = _InterlockedOr64(v5 + 6, 4u);
          if ( (v6 & 0xA) == 8 )
          {
            v7 = v6;
            (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v5 + 2) + 16LL))(*((_QWORD *)v5 + 3));
            v6 = v7;
          }
          if ( (v6 & 3) == 1 )
          {
            _InterlockedAnd64(v5 + 6, 0xFFFFFFFFFFFFFFFEuLL);
            v8 = v6;
            sub_1414FE850(v5 + 4);
            v6 = v8;
          }
          if ( (v6 & 2) != 0 )
            *((_BYTE *)v5 + 56) = 0;
          if ( *v15 && !_InterlockedDecrement64(*v15) )
            sub_141502A70(v15);
        }
        *(_BYTE *)(v16 + 56) = 1;
        sub_1407A7A40(v14);
        v9 = v16;
        *(_BYTE *)(v16 + 64) = 0;
        v10 = *(volatile signed __int64 **)v9;
        v11 = *(_QWORD *)(v9 + 8);
        v13[0] = v10;
        v13[1] = v11;
        if ( !_InterlockedDecrement64(v10 + 39) )
        {
          sub_1414FE8C0(v10 + 34);
          v10 = (volatile signed __int64 *)v13[0];
        }
        if ( !_InterlockedDecrement64(v10) )
          sub_1409E3B30(v13);
        v4 = 1;
        v3 = v16;
      }
      *(_BYTE *)(v3 + 65) = v4;
      return v2 == 2;
  }
}
