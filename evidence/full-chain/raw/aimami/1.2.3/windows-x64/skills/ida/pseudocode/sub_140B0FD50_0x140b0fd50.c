// module: codexmate_lib/core/skills
// addr: 0x140b0fd50
// name: sub_140B0FD50
// win 1.2.1 | module src/core/skills.rs | attributed via panic-Location xref (win-native)
void __fastcall sub_140B0FD50(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int128 v5; // [rsp+20h] [rbp-60h] BYREF
  __int128 v6; // [rsp+30h] [rbp-50h]
  __int128 v7; // [rsp+40h] [rbp-40h]
  __int128 v8; // [rsp+50h] [rbp-30h]
  __int128 v9; // [rsp+60h] [rbp-20h]
  void *v10; // [rsp+70h] [rbp-10h]
  _QWORD v11[2]; // [rsp+78h] [rbp-8h] BYREF
  __int128 v12; // [rsp+88h] [rbp+8h] BYREF
  __int128 v13; // [rsp+98h] [rbp+18h]
  __int128 v14; // [rsp+A8h] [rbp+28h]
  __int128 v15; // [rsp+B8h] [rbp+38h]
  __int128 v16; // [rsp+C8h] [rbp+48h]
  void *v17; // [rsp+D8h] [rbp+58h]
  __int128 *v18; // [rsp+E0h] [rbp+60h]
  __int64 v19; // [rsp+E8h] [rbp+68h] BYREF
  char v20; // [rsp+F7h] [rbp+77h] BYREF
  __int64 v21; // [rsp+F8h] [rbp+78h]

  v21 = -2;
  if ( !*(_BYTE *)(a1 + 32) )
  {
    v1 = *(_QWORD *)(a1 + 8);
    v2 = *(_QWORD *)(a1 + 16);
    sub_141486710(&v12, v1, v2);
    if ( (_DWORD)v12 == 2 )
    {
      *((_QWORD *)&v5 + 1) = *((_QWORD *)&v12 + 1);
      *(_QWORD *)&v5 = 2;
LABEL_5:
      v3 = (__int64 *)&v5 + 1;
LABEL_6:
      sub_140018650(v3);
      return;
    }
    v5 = v12;
    v10 = v17;
    v9 = v16;
    v8 = v15;
    v7 = v14;
    v6 = v13;
    if ( (_QWORD)v12 == 2 )
      goto LABEL_5;
    v4 = sub_1414860D0(v1, v2);
    if ( v4 )
    {
      v19 = v4;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v11[0] = v1;
        v11[1] = v2;
        *(_QWORD *)&v5 = v11;
        *((_QWORD *)&v5 + 1) = sub_14148F3A0;
        *(_QWORD *)&v6 = &v19;
        *((_QWORD *)&v6 + 1) = sub_141490720;
        *(_QWORD *)&v12 = 0;
        *((_QWORD *)&v12 + 1) = aCodexmateLibCo_35;
        v13 = 0x1Bu;
        *(_QWORD *)&v14 = aSrcCoreSkillsR;
        *((_QWORD *)&v14 + 1) = 18;
        *(_QWORD *)&v15 = 2;
        *((_QWORD *)&v15 + 1) = aCodexmateLibCo_35;
        *(_QWORD *)&v16 = 27;
        *((_QWORD *)&v16 + 1) = 0x2F00000001LL;
        v17 = &unk_1417B1460;
        v18 = &v5;
        sub_1412C36A0(&v20, &v12);
      }
      v3 = &v19;
      goto LABEL_6;
    }
  }
}