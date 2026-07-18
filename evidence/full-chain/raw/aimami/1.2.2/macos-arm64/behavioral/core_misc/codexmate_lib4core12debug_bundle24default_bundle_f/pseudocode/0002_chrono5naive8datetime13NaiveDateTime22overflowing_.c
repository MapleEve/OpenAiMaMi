// mac 1.2.2 NEW codexmate_lib4core12debug_bundle24default_bundle_f 0x100d85770 d=1
int *__fastcall chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h60027b0c7aea670a(
        int *a1,
        int *a2,
        int a3)
{
  int *result; // rax
  int v4; // ecx
  int v5; // r8d
  int v6; // ecx
  int v7; // r8d
  int v8; // edi
  int v9; // esi
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // edi
  unsigned int v13; // r8d
  int v14; // r8d
  int v15; // edi
  int v16; // r9d
  int v17; // edi
  unsigned int v18; // r9d
  int v19; // edi

  result = a1; /*0x100d85774*/
  v4 = a2[1] + a3; /*0x100d8577a*/
  v5 = v4 / 86400; /*0x100d85795*/
  v6 = v4 % 86400; /*0x100d8579f*/
  v7 = (v6 >> 31) + v5; /*0x100d857a6*/
  v8 = *a2; /*0x100d857a9*/
  v9 = a2[2]; /*0x100d857ab*/
  if ( v7 == 1 ) /*0x100d857b2*/
  {
    v13 = v8 & 0x1FF8; /*0x100d857d9*/
    if ( v13 < 0x16D1 ) /*0x100d857e7*/
    {
      v11 = v13 + 16; /*0x100d857ed*/
      v12 = v8 & 0xFFFFE007; /*0x100d857f1*/
      goto LABEL_7; /*0x100d857f1*/
    }
    v19 = v8 >> 13; /*0x100d858aa*/
    v14 = 2147475487; /*0x100d858b4*/
    if ( (unsigned int)(v19 - 262142) >= 0xFFF80002 ) /*0x100d858c1*/
      v14 = anon_a11b1b15cfa245962be9d291ea8530de_19[(v19 + 1) % 400 + ((((v19 + 1) % 400) >> 31) & 0x190)] /*0x100d8590f*/
          | ((v19 + 1) << 13)
          | 0x10;
  }
  else
  {
    if ( v7 != -1 ) /*0x100d857b8*/
    {
LABEL_8:
      v14 = v8; /*0x100d857fa*/
      goto LABEL_9; /*0x100d857fa*/
    }
    v10 = v8 & 0x1FF0; /*0x100d857bd*/
    if ( v10 > 0x10 ) /*0x100d857c8*/
    {
      v11 = v10 - 16; /*0x100d857ca*/
      v12 = v8 & 0xFFFFE00F; /*0x100d857ce*/
LABEL_7:
      v8 = v11 | v12; /*0x100d857f7*/
      goto LABEL_8; /*0x100d857f7*/
    }
    v15 = v8 >> 13; /*0x100d85810*/
    v14 = -2147477785; /*0x100d8581a*/
    if ( (unsigned int)(v15 - 0x40000) >= 0xFFF80002 ) /*0x100d85827*/
    {
      v16 = v15; /*0x100d85829*/
      v17 = v15 - 1; /*0x100d8582c*/
      v18 = anon_a11b1b15cfa245962be9d291ea8530de_19[v16 /*0x100d85872*/
                                                   - 400 * (v17 / 400)
                                                   - 1
                                                   + (((v16 - 400 * (v17 / 400) - 1) >> 31) & 0x190)]
          | 0x19F0;
      if ( anon_a11b1b15cfa245962be9d291ea8530de_23[v18 >> 3] ) /*0x100d85887*/
        v14 = (v17 << 13) | (v18 - 8 * anon_a11b1b15cfa245962be9d291ea8530de_23[v18 >> 3]); /*0x100d858a2*/
    }
  }
LABEL_9:
  *result = v14; /*0x100d857fd*/
  result[1] = v6 + ((v6 >> 31) & 0x15180); /*0x100d85808*/
  result[2] = v9; /*0x100d8580b*/
  return result; /*0x100d8580e*/
}