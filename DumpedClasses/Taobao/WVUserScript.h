//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WVUserScript : NSObject
{
    NSString *_key;
    NSString *_source;
}

@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithSourceURL:(id)arg1;
- (id)initWithSource:(id)arg1;

@end

