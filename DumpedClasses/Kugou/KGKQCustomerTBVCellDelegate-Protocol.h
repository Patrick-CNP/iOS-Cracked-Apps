//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KQBaseTBVCell, KQItemEntity;

@protocol KGKQCustomerTBVCellDelegate <NSObject>
- (void)KGKQCustomerTBVCell:(KQBaseTBVCell *)arg1 clickedIntroBtnWithModel:(KQItemEntity *)arg2;
- (void)KGKQCustomerTBVCell:(KQBaseTBVCell *)arg1 clickedIntroPlayWithModel:(KQItemEntity *)arg2 withPlayState:(long long)arg3;
- (void)KGKQCustomerTBVCell:(KQBaseTBVCell *)arg1 clickedAvatarPlayWithModel:(KQItemEntity *)arg2 toPlay:(_Bool)arg3;
- (void)KGKQCustomerTBVCell:(KQBaseTBVCell *)arg1 clickedAvatarPlayWithModel:(KQItemEntity *)arg2 withPlayState:(long long)arg3;
- (void)KGKQCustomerTBVCell:(KQBaseTBVCell *)arg1 clickedAvatarOtherAreaPlayWithModel:(KQItemEntity *)arg2;
@end
