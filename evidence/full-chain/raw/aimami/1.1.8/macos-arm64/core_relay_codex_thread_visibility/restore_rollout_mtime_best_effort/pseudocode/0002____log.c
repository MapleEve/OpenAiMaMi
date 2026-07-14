// mac 1.1.8 behavioral restore_rollout_mtime_best_effort 0x100ef1800 d=1
__int64 _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d()
{
  __int64 (__fastcall **v0)(void *); // rax
  void *v1; // rdi

  v0 = (__int64 (__fastcall **)(void *))&unk_10156BF20; /*0x100ef180f*/
  if ( log::STATE::h45bb087233f3e472 == 2 ) /*0x100ef1816*/
    v0 = (__int64 (__fastcall **)(void *))log::LOGGER::h5ad60f0f80f2916c; /*0x100ef1816*/
  v1 = &log::logger::NOP::h2051fe4a757134e1; /*0x100ef181e*/
  if ( log::STATE::h45bb087233f3e472 == 2 ) /*0x100ef1825*/
    v1 = (void *)log::LOGGER::h5ad60f0f80f2916c; /*0x100ef1825*/
  return v0[4](v1);
}