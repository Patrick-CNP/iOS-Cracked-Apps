//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface PSDViewParam : NSObject
{
    Class _contentViewCls;
    NSString *_url;
    NSDictionary *_expandParams;
    struct CGRect _frame;
}

@property(retain, nonatomic) NSDictionary *expandParams; // @synthesize expandParams=_expandParams;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) Class contentViewCls; // @synthesize contentViewCls=_contentViewCls;
- (void).cxx_destruct;
- (id)init;

@end
