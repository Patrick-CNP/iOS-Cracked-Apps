//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FXLiveHomeBll : NSObject
{
}

+ (void)showLiveInterviewConcertStatusConcertId:(long long)arg1 concertType:(long long)arg2 complete:(CDUnknownBlockType)arg3;
+ (id)getMvUrl:(id)arg1;
+ (id)converMVListToViewModel:(id)arg1;
+ (id)convertHomeListlToViewModel:(id)arg1;
+ (void)getHelloList:(long long)arg1 pageSize:(long long)arg2 status:(long long)arg3 success:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
+ (void)getReviewMvList:(long long)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
+ (void)checkIsVip:(long long)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
+ (void)checkSubscribe:(id)arg1 kgId:(long long)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
+ (void)sendSubscribe:(long long)arg1 kgId:(long long)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
+ (void)getLivingShowIds:(id)arg1 Success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
+ (void)getReviewList:(long long)arg1 pageSize:(long long)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
+ (void)getLivingOrHelloConcertIds:(id)arg1 Success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
+ (void)getLivingList:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
+ (void)getKGReviewMvStatisPlayNumWithConcertId:(long long)arg1 concertType:(long long)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
+ (void)getKGReviewListWithAfterColumnTranConcertType:(long long)arg1 pageNum:(long long)arg2 pageSize:(long long)arg3 success:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
+ (void)getKGLivingListAfterColumnTranConcertType:(long long)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;

@end

