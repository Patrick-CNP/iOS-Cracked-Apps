//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FCUserFeedLink : NSObject
{
    NSString *_tagUrl;
    NSString *_url;
    NSString *_title;
    NSString *_content;
}

@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *tagUrl; // @synthesize tagUrl=_tagUrl;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)arg1;

@end

