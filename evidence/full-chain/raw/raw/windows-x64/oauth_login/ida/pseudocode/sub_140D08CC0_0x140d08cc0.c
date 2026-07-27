// module: codexmate_lib/core/oauth_login
// addr: 0x140d08cc0
// name: sub_140D08CC0
// win 1.2.1 | module src/core/oauth_login.rs | attributed via panic-Location xref (win-native)
bool __fastcall sub_140D08CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rdx
  char v7; // cl
  volatile signed __int64 *v8; // rsi
  char v9; // al
  char v10; // di
  char v11; // di
  __int64 v12; // rax
  volatile signed __int64 *v13; // rcx
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  volatile signed __int64 **v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+48h] [rbp-8h]
  __int64 v20; // [rsp+50h] [rbp+0h]

  v20 = -2;
  v4 = *(unsigned __int8 *)(a1 + 65);
  v19 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_BYTE *)(a1 + 64) = 1;
      *(_OWORD *)(a1 + 40) = *(_OWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 32);
      v17 = a1 + 40;
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
      sub_1416C3400(&off_1417BC0F8, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417BC0F8, a2, a3, a4);
    case 3LL:
      v17 = a1 + 40;
      switch ( *(_BYTE *)(a1 + 56) )
      {
        case 0:
LABEL_4:
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 40);
          break;
        case 1:
LABEL_26:
          sub_1416C3400(&off_1417B9D58, a2, a3, a4);
        case 2:
LABEL_25:
          sub_1416C3420(&off_1417B9D58, a2, a3, a4);
        case 3:
          break;
      }
LABEL_5:
      v18 = (volatile signed __int64 **)(a1 + 48);
      v5 = sub_140891B70();
      if ( v5 == 2 )
      {
        v6 = v19;
        *(_BYTE *)(v19 + 56) = 3;
        v7 = 3;
      }
      else
      {
        v8 = *v18;
        if ( *v18 )
        {
          v9 = _InterlockedOr64(v8 + 6, 4u);
          if ( (v9 & 0xA) == 8 )
          {
            v10 = v9;
            (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v8 + 2) + 16LL))(*((_QWORD *)v8 + 3));
            v9 = v10;
          }
          if ( (v9 & 3) == 1 )
          {
            _InterlockedAnd64(v8 + 6, 0xFFFFFFFFFFFFFFFEuLL);
            v11 = v9;
            sub_1412F0A10(v8 + 4);
            v9 = v11;
          }
          if ( (v9 & 2) != 0 )
            *((_BYTE *)v8 + 56) = 0;
          if ( *v18 && !_InterlockedDecrement64(*v18) )
            sub_1412E8E40(v18);
        }
        *(_BYTE *)(v19 + 56) = 1;
        sub_1405278F0(v17);
        v12 = v19;
        *(_BYTE *)(v19 + 64) = 0;
        v13 = *(volatile signed __int64 **)v12;
        v14 = *(_QWORD *)(v12 + 8);
        v16[0] = v13;
        v16[1] = v14;
        if ( !_InterlockedDecrement64(v13 + 39) )
        {
          sub_1413038D0(v13 + 34);
          v13 = (volatile signed __int64 *)v16[0];
        }
        if ( !_InterlockedDecrement64(v13) )
          sub_140573F70(v16);
        v7 = 1;
        v6 = v19;
      }
      *(_BYTE *)(v6 + 65) = v7;
      return v5 == 2;
  }
}