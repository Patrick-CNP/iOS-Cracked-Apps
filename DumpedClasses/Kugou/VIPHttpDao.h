//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpDao.h"

@interface VIPHttpDao : BaseHttpDao
{
}

- (id)givenPid;
- (id)pid;
- (void)paidGivenTranscationWithReceipt:(id)arg1 AndOrderNumber:(id)arg2 UserID:(id)arg3 UserToken:(id)arg4 AndError:(id *)arg5;
- (id)requestGivenOrderNumberWithProductId:(id)arg1 UserID:(id)arg2 UserToken:(id)arg3 AndError:(id *)arg4;
- (void)paidAppstoreWithUserId:(id)arg1 AndReceipt:(id)arg2 AndOrderNumber:(id)arg3 AndOutTradeNo:(id)arg4 AndError:(id *)arg5;
- (id)requestOrderNumberWithProductId:(id)arg1 AndUserId:(id)arg2 AndSourceId:(long long)arg3 AndHash:(id)arg4 AndError:(id *)arg5;
- (id)clientTimeString;
- (_Bool)apyUnsignAutPyaWithUserID:(id)arg1 error:(id *)arg2;
- (_Bool)wUnsignAutPyaWithUserID:(id)arg1 error:(id *)arg2;
- (id)getPayOrderStringWithUserID:(id)arg1 payType:(long long)arg2 productType:(long long)arg3 vipType:(long long)arg4 month:(id)arg5 price:(id)arg6 cardType:(long long)arg7 isUpgrade:(_Bool)arg8 error:(id *)arg9;
- (id)getAlipayAutoPayURLWithUserID:(id)arg1 month:(id)arg2 vipType:(long long)arg3 error:(id *)arg4;
- (id)getWeiXinAutoPayURLWithUserID:(id)arg1 month:(id)arg2 vipType:(long long)arg3 error:(id *)arg4;
- (id)getNewVipPaymentPriceWith:(id *)arg1;
- (void)sendError:(id)arg1 AndUrlKey:(id)arg2 AndRetrunData:(id)arg3 AndPostBody:(id)arg4;

@end

