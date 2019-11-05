//
//  AppDelegate.h
//  Loard
//
//  Created by 李莉 on 2019/11/5.
//  Copyright © 2019 ebtech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

