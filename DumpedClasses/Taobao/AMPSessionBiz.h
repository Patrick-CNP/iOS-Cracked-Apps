//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKTMsgBusHelp.h"

#import "AMPSessionBiz.h"

@class NSString;

@interface AMPSessionBiz : MKTMsgBusHelp <AMPSessionBiz>
{
    NSString *_currentSessionId;
    id <AMPModuleManager> _moduleManager;
}

@property(retain, nonatomic) id <AMPModuleManager> moduleManager; // @synthesize moduleManager=_moduleManager;
@property(retain, nonatomic) NSString *currentSessionId; // @synthesize currentSessionId=_currentSessionId;
- (void).cxx_destruct;
- (void)netInfoNotifyUpdate:(id)arg1;
- (void)creatConversation:(id)arg1 name:(id)arg2 type:(id)arg3 ext:(id)arg4 result:(CDUnknownBlockType)arg5;
- (void)creatConversation:(id)arg1 name:(id)arg2 type:(id)arg3 itemId:(id)arg4 url:(id)arg5 content:(id)arg6 result:(CDUnknownBlockType)arg7;
- (void)ampSyncDataCheckSessionInfo:(id)arg1 modifyTime:(id)arg2;
- (void)ampGroupUserInfoUpdatedList:(id)arg1;
- (void)ampGroupInfoDelete:(id)arg1;
- (void)ampGroupInfoUpdated:(id)arg1 changeFlag:(id)arg2;
- (void)ampMessageDidChange:(id)arg1 changeType:(id)arg2;
- (id)batchCheckSession:(id)arg1;
- (void)ampFriendUpdated:(id)arg1 userId:(id)arg2;
- (void)sortSessionList:(id)arg1;
- (_Bool)saveCachedSessions:(id)arg1;
- (_Bool)removeCachedSessionWithSessionId:(id)arg1;
- (id)cachedSessionBySessinId:(id)arg1;
- (id)cachedSessionList;
- (void)sessionChangeFromMessage:(id)arg1 changeType:(unsigned long long)arg2 isLastMessageUpdated:(_Bool *)arg3;
- (void)invalidatesSession:(id)arg1;
- (unsigned long long)sessionChangeFromMessageDirect:(id)arg1 changeType:(unsigned long long)arg2 isLastMessageUpdated:(_Bool *)arg3;
- (id)sessionWithId:(id)arg1 needCreat:(_Bool)arg2 strategy:(long long)arg3;
- (id)sessionUpdateObject:(id)arg1;
- (void)setSession:(id)arg1 managerRemind:(_Bool)arg2;
- (void)setSession:(id)arg1 atRemind:(_Bool)arg2;
- (void)setSession:(id)arg1 remind:(_Bool)arg2;
- (void)setSession:(id)arg1 remindType:(int)arg2;
- (_Bool)isSessionExist:(id)arg1;
- (id)sessionWithId:(id)arg1 needCreat:(_Bool)arg2 local:(_Bool)arg3;
- (id)sessionWithId:(id)arg1 needCreat:(_Bool)arg2;
- (id)filterSession:(id)arg1;
- (id)sessionList;
- (id)sessionListInMemonry;
- (void)clearUnreadedCountOnServerWithSessionId:(id)arg1;
- (void)clearUnreadedCountOfSessionWithId:(id)arg1;
- (void)clearShareItemUnreadedCountOfSessionWithId:(id)arg1;
- (void)clearAiTaOfSessionWithId:(id)arg1;
- (void)deleteSessionWithSessionIds:(id)arg1;
- (void)saveSessions:(id)arg1 needNotify:(_Bool)arg2;
- (void)notifySessions:(id)arg1;
- (void)registerPacketParse:(id)arg1;
- (void)stopBiz;
- (void)resetBiz;
- (void)startBiz;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

