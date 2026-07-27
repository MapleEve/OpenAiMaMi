// __ZN13codexmate_lib8platform14audio_feedback16PromptSoundStyle22start_ducking_delay_ms @ 0x10035a3d0 | 基线 same-set
unsigned __int64 __fastcall codexmate_lib::platform::audio_feedback::PromptSoundStyle::start_ducking_delay_ms::h6ee75f92699dbe28(
        _BYTE *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  int v4; // esi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r11
  __int64 v7; // rdi
  int v8; // r9d
  char v9; // r11
  bool v10; // zf
  __int64 v11; // r10
  unsigned __int64 v12; // rdi
  int v13; // ebx
  int v14; // esi
  unsigned __int64 v15; // r11
  __int64 v16; // rdi
  int v17; // r9d
  __int64 v18; // r10
  unsigned __int64 v19; // rdi
  int v20; // ebx

  v4 = 0; /*0x10035a3d8*/
  if ( *a1 ) /*0x10035a3d5*/
  {
    if ( *a1 == 2 ) /*0x10035a3e1*/
    {
      return 0; /*0x10035a3e7*/
    }
    else
    {
      v14 = 0; /*0x10035a48f*/
      v15 = 12; /*0x10035a491*/
      v16 = 20; /*0x10035a497*/
      v17 = 0; /*0x10035a4a3*/
      result = 630; /*0x10035a4a6*/
      while ( 1 ) /*0x10035a4e1*/
      {
        v18 = *(unsigned int *)((char *)&unk_1015EDA4B + v15 + 4); /*0x10035a4e1*/
        v19 = v18 + v16; /*0x10035a4e6*/
        if ( v19 > 0x9DB2 ) /*0x10035a4f0*/
          break; /*0x10035a4f0*/
        v20 = *(_DWORD *)((char *)&unk_1015EDA4B + v15); /*0x10035a4f6*/
        if ( (unsigned int)v18 >= 0x10 && v20 == 544501094 ) /*0x10035a506*/
        {
          a3 = *(_DWORD *)((char *)&unk_1015EDA4B + v15 + 16); /*0x10035a4b0*/
          v17 = 1; /*0x10035a4b5*/
          v9 = 1; /*0x10035a4bb*/
          v10 = v14 == 1; /*0x10035a4c1*/
          v14 = 0; /*0x10035a4c4*/
          if ( v10 ) /*0x10035a4c9*/
            goto LABEL_30; /*0x10035a4c9*/
        }
        else
        {
          v9 = 1; /*0x10035a50e*/
          if ( v20 == 1635017060 ) /*0x10035a514*/
          {
            v14 = 1; /*0x10035a514*/
            a4 = v18; /*0x10035a518*/
          }
          if ( v17 && v14 == 1 ) /*0x10035a524*/
            goto LABEL_30; /*0x10035a524*/
        }
        v15 = v19 + (v18 & 1); /*0x10035a4cf*/
        v16 = v15 + 8; /*0x10035a4d3*/
        if ( v15 > 0x9DAA ) /*0x10035a4df*/
        {
          v9 = v14; /*0x10035a537*/
          if ( (v17 & 1) == 0 ) /*0x10035a53e*/
            return result; /*0x10035a53e*/
          goto LABEL_30; /*0x10035a53e*/
        }
      }
    }
  }
  else
  {
    v6 = 12; /*0x10035a3ec*/
    v7 = 20; /*0x10035a3f2*/
    v8 = 0; /*0x10035a3fe*/
    result = 630; /*0x10035a401*/
    while ( 1 ) /*0x10035a449*/
    {
      v11 = *(unsigned int *)((char *)&unk_1015E66B3 + v6 + 4); /*0x10035a449*/
      v12 = v11 + v7; /*0x10035a44e*/
      if ( v12 > 0x7398 ) /*0x10035a458*/
        break; /*0x10035a458*/
      v13 = *(_DWORD *)((char *)&unk_1015E66B3 + v6); /*0x10035a45a*/
      if ( (unsigned int)v11 >= 0x10 && v13 == 544501094 ) /*0x10035a46a*/
      {
        a3 = *(_DWORD *)((char *)&unk_1015E66B3 + v6 + 16); /*0x10035a410*/
        v8 = 1; /*0x10035a415*/
        v9 = 1; /*0x10035a41b*/
        v10 = v4 == 1; /*0x10035a421*/
        v4 = 0; /*0x10035a424*/
        if ( v10 ) /*0x10035a429*/
          goto LABEL_30; /*0x10035a429*/
      }
      else
      {
        v9 = 1; /*0x10035a472*/
        if ( v13 == 1635017060 ) /*0x10035a478*/
        {
          v4 = 1; /*0x10035a478*/
          a4 = v11; /*0x10035a47c*/
        }
        if ( v8 && v4 == 1 ) /*0x10035a488*/
          goto LABEL_30; /*0x10035a488*/
      }
      v6 = v12 + (v11 & 1); /*0x10035a433*/
      v7 = v6 + 8; /*0x10035a437*/
      if ( v6 > 0x7390 ) /*0x10035a443*/
      {
        v9 = v4; /*0x10035a528*/
        if ( (v8 & 1) == 0 ) /*0x10035a52f*/
          return result; /*0x10035a52f*/
LABEL_30:
        if ( a3 ) /*0x10035a546*/
        {
          if ( (v9 & 1) != 0 ) /*0x10035a550*/
            return 1000 * (unsigned __int64)a4 / a3 - ((1000 * (unsigned __int64)a4 % a3 == 0) - 1LL) + 130; /*0x10035a56e*/
        }
        return result; /*0x10035a56e*/
      }
    }
  }
  return result; /*0x10035a3e9*/
}