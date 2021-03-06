//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface SDDJWeakTimer : NSObject
{
    _Bool _isSelfQueue;
    CDUnknownBlockType _actionTimer;
    CDUnknownBlockType _actionComplate;
    NSObject<OS_dispatch_queue> *_privateSerialQueue;
    NSObject<OS_dispatch_source> *_sourceTimer;
    _Bool _notBreak;
    _Bool _repeats;
    long long _tag;
    long long _innerLoopCount;
    double _timeInterval;
    id _userInfo;
    unsigned long long _weakTimerState;
    long long _repeatCount;
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 action:(CDUnknownBlockType)arg2 userInfo:(id)arg3 repeats:(_Bool)arg4 repeatCount:(long long)arg5 dispatchQueue:(id)arg6;
@property(readonly, nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(readonly, nonatomic) unsigned long long weakTimerState; // @synthesize weakTimerState=_weakTimerState;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly, nonatomic) long long innerLoopCount; // @synthesize innerLoopCount=_innerLoopCount;
@property(nonatomic) _Bool notBreak; // @synthesize notBreak=_notBreak;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (void)onTimerSourceHandle;
- (CDUnknownBlockType)timerComplateAction;
- (void)setTimerComplateAction:(CDUnknownBlockType)arg1;
- (void)stopTimer;
- (void)startTimer;
- (_Bool)isValid;
- (void)invalidate;
- (void)schedule;
- (void)fire;
- (void)setupTimerSource;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 action:(CDUnknownBlockType)arg2 userInfo:(id)arg3 repeats:(_Bool)arg4 repeatCount:(long long)arg5 dispatchQueue:(id)arg6;
- (id)init;

@end

