//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APNotifyPushServiceImpl : NSObject
{
    id <APNotifyPushServiceImplDelegate> _delegate;
}

+ (id)getInstance;
@property(nonatomic) __weak id <APNotifyPushServiceImplDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)parseRspMsgPush:(char *)arg1;

@end

