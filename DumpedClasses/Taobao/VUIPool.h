//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface VUIPool : NSObject
{
    NSMutableArray *_mGarbageBin;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *mGarbageBin; // @synthesize mGarbageBin=_mGarbageBin;
- (void).cxx_destruct;
- (void)shutdown;
- (void)recycle:(id)arg1;
- (id)obtain;
- (id)init;

@end

