//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface ACDSTQLVisitResult : NSObject
{
    NSError *_error;
    id _result;
}

+ (id)createResult:(id)arg1 withError:(id)arg2;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;

@end
