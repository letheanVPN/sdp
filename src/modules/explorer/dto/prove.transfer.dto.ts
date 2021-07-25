import { ApiProperty } from '@nestjs/swagger';
import { RawBlockEntity } from '../entites/raw.block.entity';
import { ProveTransferEntity } from '../entites/prove.transfer.entity';

export class ProveTransferDTO {
  /**
   * payload data
   */
  data: ProveTransferEntity;

  @ApiProperty({ enum: ['success', 'fail'] })
  status: string;
}
