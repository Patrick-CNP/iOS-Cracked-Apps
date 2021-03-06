//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CIMCardInfoEngineDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CardInfoEngine : NSObject <CIMCardInfoEngineDelegate>
{
    int _seqId;
    NSMutableArray *_requestQueue;
    int _maxZangFriCount;
    int _maxZangEncCount;
    NSMutableDictionary *_hasZangFriDic;
    NSMutableDictionary *_hasZangEncDic;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSMutableDictionary *hasZangEncDic; // @synthesize hasZangEncDic=_hasZangEncDic;
@property(retain, nonatomic) NSMutableDictionary *hasZangFriDic; // @synthesize hasZangFriDic=_hasZangFriDic;
@property(nonatomic) int maxZangEncCount; // @synthesize maxZangEncCount=_maxZangEncCount;
@property(nonatomic) int maxZangFriCount; // @synthesize maxZangFriCount=_maxZangFriCount;
- (void)CIMCardInfoEngine:(id)arg1 didRecievedMsg:(CDStruct_7895f40e)arg2;
- (void)didRespFavoriteList:(struct RespGetFavoriteList *)arg1;
- (void)didGetCardSwitch:(struct RespGetCardSwitch *)arg1;
- (void)didSetCardSwitch:(struct RespSetCardSwitch *)arg1;
- (void)didSetCard:(struct RespSetCard *)arg1;
- (void)didRespVote:(struct RespVote *)arg1;
- (void)didRespGetVoterList:(struct RespGetVoterList *)arg1;
- (void)didRespGetVisitorList:(struct RespGetVisitorList *)arg1;
- (void)didRespPicSafetyCheck:(struct RespPicSafetyCheck *)arg1;
- (_Bool)setCardID:(long long)arg1 templateInfo:(char *)arg2 infoSize:(long long)arg3 withReqID:(int)arg4;
- (void)didRespSetTemplateID:(struct RespSetCard *)arg1 andMsgSeq:(long long)arg2;
- (int)reqFavoriteUin:(id)arg1 count:(int)arg2 On:(_Bool)arg3 type:(int)arg4 cookis:(id)arg5;
- (int)reqFavoriteUin:(id)arg1 On:(_Bool)arg2 type:(int)arg3 cookis:(id)arg4;
- (id)GetFullVotersWithUIN:(long long)arg1 userData:(id)arg2;
- (id)GetCommonCardWithUIN:(long long)arg1;
- (_Bool)Reset;
- (void)updateVoterWithUIN:(long long)arg1 voters:(void *)arg2;
- (void)updateVisitorWithUIN:(long long)arg1 visitors:(void *)arg2;
- (void)saveCommonCardInfo:(id)arg1;
- (id)loadCommonCardInfo:(long long)arg1;
- (void)onPacketError:(id)arg1;
- (void)requestTimeout:(id)arg1;
- (int)removeQueueRequestWithCmd:(id)arg1;
- (int)removeQueueRequest:(int)arg1;
- (id)getQueueRequestWithTimer:(id)arg1;
- (id)getQueueRequestWithSeqId:(int)arg1;
- (id)getQueueRequestWithType:(int)arg1;
- (id)requestGetFavoriteList:(int)arg1:(id)arg2;
- (id)requestFavoriteUin:(id)arg1 On:(_Bool)arg2 type:(int)arg3 cookis:(id)arg4 sequence:(int *)arg5;
- (id)requestFavoriteUin:(id)arg1 count:(int)arg2 On:(_Bool)arg3 type:(int)arg4 cookis:(id)arg5 sequence:(int *)arg6;
- (id)ReqGetCardSwitch:(long long)arg1;
- (id)ReqSetCardSwitch:(long long)arg1 bOpen:(_Bool)arg2 isSetState:(_Bool)arg3;
- (id)RequestGetVoterList:(long long)arg1 userData:(id)arg2;
- (int)GetSeqId;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

