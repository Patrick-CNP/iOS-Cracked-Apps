//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SetGroupAdminWupProxy : NSObject
{
    unsigned int _dwGroupCode;
}

+ (id)shareInstance;
- (int)parseSetGroupAdminResp:(char *)arg1 len:(int)arg2 uin:(unsigned int *)arg3 op:(char *)arg4;
- (char *)requestSetGroupAdminWithGroupCode:(unsigned int)arg1 uin:(unsigned int)arg2 op:(BOOL)arg3;

@end
