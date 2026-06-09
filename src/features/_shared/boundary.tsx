export interface DumpedContractCommandBoundary {
  command: string;
  argKeys: readonly string[];
  wrappers: readonly string[];
  controlFlowCount: number;
}

export function DumpedContractBoundary({
  moduleId,
  commands,
}: {
  moduleId: string;
  commands: readonly DumpedContractCommandBoundary[];
}) {
  void moduleId;
  void commands;
  return null;
}
