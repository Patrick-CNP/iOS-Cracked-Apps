//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBAMPMessage.h"

@class NSString;

@interface TBAMPGIFMessage : TBAMPMessage
{
    NSString *_urlString;
}

@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (void)loadDataWithMessage:(id)arg1;
- (id)toDictionary;
- (id)ampDeepCopy;
- (id)initWithMessage:(id)arg1;
- (id)initWithJson:(id)arg1;

@end

