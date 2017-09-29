/*
 * TeleStax, Open Source Cloud Communications
 * Copyright 2011-2015, Telestax Inc and individual contributors
 * by the @authors tag.
 *
 * This program is free software: you can redistribute it and/or modify
 * under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation; either version 3 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 *
 * For questions related to commercial use licensing, please contact sales@telestax.com.
 *
 */

#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>
#import "RestCommClient.h"
#import "MessageTableViewController.h"
#import "ContactUpdateTableViewController.h"
#import "ContactDetailsTableViewController.h"
#import "SipSettingsTableViewController.h"
#import "RCUtilities.h"
#import <PushKit/PushKit.h>

@interface AppDelegate : UIResponder <RCDeviceDelegate, UIApplicationDelegate, PKPushRegistryDelegate, CallDelegate,
ContactUpdateDelegate, ContactDetailsDelegate, MessageDelegate, SipSettingsDelegate>

@property (strong, nonatomic) UIWindow *window;
@property BOOL isInitialized;
@property BOOL isRegistered;
@property (nonatomic,retain) RCDevice* device;
@property NSMutableDictionary * parameters;
@property RCDeviceState previousDeviceState;

@end
