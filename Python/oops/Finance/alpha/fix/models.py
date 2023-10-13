from django.db import models

# Create your models here.
class Fin(models.Model):
    current_balance = models.IntegerField(default = 0, null=True)
    spending = models.IntegerField(default = 0, null=True)