//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface HPPublishContentBase : TBJSONModel
{
    NSString *_entityType;
    NSString *_summary;
    NSString *_title;
    long long _userId;
    NSArray *_properties;
}

@property(retain, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *entityType; // @synthesize entityType=_entityType;
- (void).cxx_destruct;

@end
