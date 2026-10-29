// win 1.2.7 | module src/core/skills.rs | ea 0x140f9c860 | name sub_140F9C860
// win 1.2.7 | module src/core/skills.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140F9C860(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rax
  _QWORD v4[4]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v5[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v6; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v7[11]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v8; // [rsp+B8h] [rbp+38h] BYREF
  char v9; // [rsp+C7h] [rbp+47h] BYREF
  __int64 v10; // [rsp+C8h] [rbp+48h]

  v10 = -2;
  if ( !*(_BYTE *)(a1 + 32) )
  {
    v1 = *(_QWORD *)(a1 + 8);
    v2 = *(_QWORD *)(a1 + 16);
    sub_141695A00(&v6, v1, v2);
    if ( (_DWORD)v6 == 2 )
    {
      v3 = v7[0];
    }
    else
    {
      v3 = sub_141695320(v1, v2);
      if ( !v3 )
        return;
      v8 = v3;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v5[0] = v1;
        v5[1] = v2;
        v4[0] = v5;
        v4[1] = sub_14169F630;
        v4[2] = &v8;
        v4[3] = sub_1416BB0B0;
        v7[5] = 2;
        v7[6] = aCodexmateLibCo_43;
        v7[7] = 27;
        v7[9] = &unk_141A65E08;
        v7[10] = v4;
        v6 = 0;
        v7[0] = aCodexmateLibCo_43;
        v7[1] = 27;
        v7[2] = 0;
        v7[3] = aSrcCoreSkillsR;
        v7[4] = 18;
        v7[8] = 0x2F00000001LL;
        sub_1414D53A0(&v9, &v6);
        v3 = v8;
      }
    }
    if ( (unsigned int)(v3 & 3) - 2 >= 2 && (v3 & 3) != 0 )
    {
      v7[0] = v3 - 1;
      LOBYTE(v6) = 3;
      sub_1416BCB00(v7);
    }
  }
}
