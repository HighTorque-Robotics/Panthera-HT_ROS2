from setuptools import find_packages
from setuptools import setup

setup(
    name='panthera_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('panthera_interfaces', 'panthera_interfaces.*')),
)
