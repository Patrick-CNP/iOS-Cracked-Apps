//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface TTAudioSessionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_audioSessionQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioSessionQueue; // @synthesize audioSessionQueue=_audioSessionQueue;
- (void).cxx_destruct;
- (void)setActiveSynchronization:(_Bool)arg1;
- (void)setActive:(_Bool)arg1;
- (_Bool)setCategory:(id)arg1;
- (id)init;

@end

