//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SPTargetActionEntry : NSObject
{
    id _target;
    SEL _selector;
    NSNumber *_event;
}

@property(retain, nonatomic) NSNumber *event; // @synthesize event=_event;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;

@end

