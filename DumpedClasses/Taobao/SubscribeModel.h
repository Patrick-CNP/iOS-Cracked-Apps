//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SubscribeModel : NSObject
{
    id _subScribeObj;
    unsigned long long _frequency;
    unsigned long long _num;
    NSString *_name;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long num; // @synthesize num=_num;
@property(nonatomic) unsigned long long frequency; // @synthesize frequency=_frequency;
@property(nonatomic) __weak id subScribeObj; // @synthesize subScribeObj=_subScribeObj;
- (void).cxx_destruct;

@end

