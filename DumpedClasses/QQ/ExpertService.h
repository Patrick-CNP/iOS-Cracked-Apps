//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAsyncCallbackProtocol.h"
#import "IEngineDispatchDelegate.h"

@class ExpertTable, NSString;

@interface ExpertService : NSObject <DBAsyncCallbackProtocol, IEngineDispatchDelegate>
{
    ExpertTable *_expertTable;
}

+ (id)GetInstance;
- (_Bool)chatWithUin:(id)arg1 role:(unsigned long long)arg2 name:(id)arg3 head:(id)arg4 sig:(id)arg5;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)requestExpertFormOidb:(id)arg1;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (id)getExpertDetailUrlWithUin:(id)arg1;
- (id)getExpertWithUin:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

