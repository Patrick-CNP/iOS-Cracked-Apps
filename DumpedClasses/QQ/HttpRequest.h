//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NetReqDelegate;

@interface HttpRequest : NSObject
{
    NSString *_url;
    id <HttpRequestDelegate> _delegate;
    NSDictionary *_body;
    NetReqDelegate *_request;
}

@property(retain, nonatomic) NetReqDelegate *request; // @synthesize request=_request;
@property(retain, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(nonatomic) __weak id <HttpRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

